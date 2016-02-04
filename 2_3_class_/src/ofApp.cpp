#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleX= 0;
    
    center2.x = ofGetWidth()/2;
    center2.y = ofGetHeight()/2;
    
    width2= 100;
    height2= 100;
    
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    circleX ++;
}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofBackground(0);
    
    ofSetColor(255,0,0);
//
//    ofEllipse(circleX, ofGetHeight()/2, 200, 200);
    
    diamond(center2, width2, height2);

    ofDrawBitmapString("hello", 500,600);

    cout<< "test" << endl;
}

//--------------------------------------------------------------
void ofApp::diamond(ofPoint center, float width, float height){
    ofLine(center.x - width/2, center.y, center.x, center.y - height/2);
    ofLine(center.x, center.y - height/2, center.x + width/2, center.y);
    ofLine(center.x +width/2, center.y, center.x, center.y + height/2);
    ofLine(center.x, center.y + height/2, center.x - width/2, center.y);
}
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
