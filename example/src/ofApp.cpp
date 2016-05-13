#include "ofApp.h"

//--------------------------------------------------------------
int counter = 0;
bool bRender = false;
int roy = 0;
int g = 0;
int biv = 0;
float v = 0.01f;
void ofApp::setup(){
    mySound.load("noise3.aiff");
    mySound.play();
    mySound.setLoop(true);
    
//    ofSetFrameRate(60);
    ofSetVerticalSync(true);

    
	leap.open();
    
	cam.setOrientation(ofPoint(-20, 0, 0));
    
	glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    
    gui.setup();
//    gui.add(angle.setup("angle", 50, 25, 90));
//    gui.add(length.setup("length", 10, 5, 30));
    
    vector<Rule *> ruleset;
    ruleset.resize(1);
    ruleset[0] = new Rule('F', "FF+[+F-F-F]-[-F-F+F]");
    lsys = new LSystem("F", ruleset);
    turtle = new Turtle(lsys->getSentence(), ofGetHeight()/3, ofDegToRad(25));
    
    ofBackground(255);
    ofSetBackgroundAuto(false);
    
}


//--------------------------------------------------------------
void ofApp::update(){
    generationNumber = lsys->getGeneration();
    
    if(generationNumber < 5){
        bRender = true;
    }
    
    if(generationNumber >= 5){
        bRender = false;
    }
    ofBackground(255);
    ofSetColor(0);
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    ofRotateZ(-90);
    turtle->render(theta, length, roy, g, biv);
    
    
    
	fingersFound.clear();
	
	//draws hands
//    simpleHands = leap.getSimpleHands();
//    
//    if( leap.isFrameNew() && simpleHands.size() ){
//        
//        leap.setMappingX(-230, 230, -ofGetWidth()/2, ofGetWidth()/2);
//		leap.setMappingY(90, 490, -ofGetHeight()/2, ofGetHeight()/2);
//        leap.setMappingZ(-150, 150, -200, 200);
//        
//        fingerType fingerTypes[] = {THUMB, INDEX, MIDDLE, RING, PINKY};
//        
//        for(int i = 0; i < simpleHands.size(); i++){
//            for (int f=0; f<5; f++) {
//                int id = simpleHands[i].fingers[ fingerTypes[f] ].id;
//                ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp; // metacarpal
//                ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip; // proximal
//                ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip; // distal
//                ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip; // fingertip
//                fingersFound.push_back(id);
//            }
//        }
//    }
    
    
    
    
     vector <Hand> hands = leap.getLeapHands();
     if( leap.isFrameNew() && hands.size() ){
     
     leap.setMappingX(-230, 230, -ofGetWidth()/2, ofGetWidth()/2);
     leap.setMappingY(90, 490, -ofGetHeight()/2, ofGetHeight()/2);
     leap.setMappingZ(-150, 150, -200, 200);
     
     fingerType fingerTypes[] = {THUMB, INDEX, MIDDLE, RING, PINKY};
     
     for(int i = 0; i < hands.size(); i++){
     for(int j = 0; j < 5; j++){
     
     
  
      const Finger & finger = hands[i].fingers()[ fingerTypes[j] ];
       
      pt[j] = leap.getMappedofPoint( finger.tipPosition() );
         for(int y = 0; y < 4; y++){
             distance[y] = ofDist(pt[j].x, pt[j].y, pt[j].z, pt[j-1].x, pt[j-1].y, pt[j-1].z);
         }
         totalDistance = (distance[0] + distance[1] + distance[2] + distance[3])/4; 
     fingersFound.push_back(finger.id());
         
         
     }
     }
         
     }
    bool handsThere = false;
    
    if(hands.size() != 0){
        handsThere = true;
    }
    if(handsThere == false && length >=4){
        length -= 0.1;
    }else if(handsThere == true && length <=10){
        length += .01;
    }
    
    if(handsThere ==false){
        ofSetFrameRate(5);
        theta = ofRandom(PI/5, PI/5.25);
        if(v> 0.02){
            v-= 0.1;
        }
        if(roy >0){
        roy--;
        }
        if(g > 0){
            g --;
        }
        if(biv > 0){
            biv --;
        }
    }else if(handsThere == true){
        ofSetFrameRate(60);
        theta = ofMap(totalDistance, 36, 100, 0, PI/2);
        if(v< 1){
            v+= 0.01;
        }
        if(roy < 200){
            roy++;
        }
        if(g < 247){
            g++; 
        }
        if(biv< 219){
            biv++;
        };
    }
    
    cout<< roy << endl;
    cout<< g<< endl;
    cout<< biv << endl;
    cout<< handsThere << endl;
    cout<< hands.size()<< endl;
    cout<< v << endl;
	leap.markFrameAsOld();
    
    
    
     mySound.setVolume(v);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

//    for(int i = 0; i < 4; i ++){
//    cout << "distance:" <<endl;
//    cout<< distance[i] << endl;
//    }
//    cout << "totes distance:" <<endl;
//    cout<< totalDistance << endl;
//    
//    for(int i = 0; i < 5; i++){
//    cout<< pt[i] << endl;
//    }
    
    if(bRender){
        ofPushMatrix();
        lsys->generate();
        turtle->setToDo(lsys->getSentence());
        turtle->changeLen(0.4);
        ofPopMatrix();
    }
    


    ofBackgroundGradient(ofColor(53, 30, 41), ofColor(32, 48, 54),  OF_GRADIENT_CIRCULAR);
	

    
//	cam.begin();
//    
//	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

//--------------------------------------------------------------
void ofApp::exit(){
    // let's close down Leap and kill the controller
    leap.close();
}
