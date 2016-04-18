#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetBackgroundAuto(false);
    gui.setup();
    gui.add(repulsion.setup("repulsion", .05, 0, 1));
    gui.add(attraction.setup("attraction", 0.01, 0, 1));
    gui.add(gravity.setup("gravity", 0.01, 0, 1));
    gui.add(numberParticles.setup("number of particles", 1000, 500, 10000));

            
    time0 = ofGetElapsedTimef();
//    p.param.setup();
    
    bornCount = 0;
   
    

}

//--------------------------------------------------------------
void ofApp::update(){
    bornRate = numberParticles; //maximum partices 10000-40000
    time = ofGetElapsedTimef();
    dt = ofClamp(time - time0, 0, 0.1);
    time0= time;
    
    
    //deleting particles
    for(int i = 0; i< p.size(); i++){
        if(!p[i].live){
            p.erase(p.begin() + i);
        }

    }
   
//    p.update(dt);
    
    bornCount += dt*bornRate;
    if(bornCount > 1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i = 0; i < bornN; i++){
            Particle newP;
            newP.param.setup();
            newP.setup();
            p.push_back(newP); //way to push object into particle vector

        }
    }
    
    for(int i = 0; i<p.size(); i++){
        p[i].update(dt);
        p[i].addRepulsion(mouseX, mouseY, 200, repulsion);
        p[i].addAttraction(100 , 200, 50, attraction);
        p[i].addGravity(ofRandom(0, ofGetWidth()), ofGetHeight(), ofGetWidth(), gravity);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<p.size(); i++){
        p[i].draw();
    }
    
    gui.draw();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
