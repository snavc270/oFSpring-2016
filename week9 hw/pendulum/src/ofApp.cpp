#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    angle = PI/4;
    r = 300;
    angAcc = 0;
    angVel = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    gravity = 0.4;
    angAcc = (-1*gravity/r)*sin(angle);
    
    angVel += angAcc;
    angle += angVel;
    
    x = ofGetWidth()/2 + r*sin(angle);
    y = r*cos(angle);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawCircle(x, y, 40);

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
