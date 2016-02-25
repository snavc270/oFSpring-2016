#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
//    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    shape.update();
    ofSetColor(red, g, b);
}

//--------------------------------------------------------------
void ofApp::draw(){
    shape.draw();
   
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        shape.grow(); 
    }

    
    for(int i=0; i<6; i++){
        
    polyline.lineTo(ofGetWidth()/2-100*i,ofGetHeight()/2-100*i);
    polyline.lineTo(ofGetWidth()/2+100*i,ofGetHeight()/2-100*i);
    polyline.lineTo(ofGetWidth()/2+100*i,ofGetHeight()/2+100*i);
    polyline.lineTo(ofGetWidth()/2-100*i,ofGetHeight()/2+100*i);
    polyline.close();
    
    
        
    }

    polyline.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='r'){

        if(red==255){
            color=true;
        }
        if(color==true){
            red -= 5;
        }
            if(red==0) {
                color=false;
            }
            if(color==false){
                red+=5;
            }
            cout<< red << endl;
            }
    if(key=='g'){
        if(g==255){
            color=true;
        }
        if(color==true){
            g-=5;
        }
        if(g==0) {
            color=false;
        }
        if(color==false){
            g+=5;
        }
    }

    
    if(key=='b'){
        if(b==255){
            color=true;
        }
        if(color==true){
            b-=5;
        }
        if(b==0) {
            color=false;
        }
        if(color==false){
            b+=5;
        }
    }
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
    shape.draw();
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
