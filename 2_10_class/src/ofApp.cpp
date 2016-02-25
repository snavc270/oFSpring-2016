#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    alien.setup(ofGetWidth()/2, ofGetHeight()/2);
    booBoo.setup(100, 100);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    alien.update();
    booBoo.update();
    
    for(int i=0; i< myAliens.size(); i++){
        myAliens[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    alien.draw();
    booBoo.draw();
    
    for(int i=0; i< myAliens.size(); i++){
        myAliens[i].draw();
    }
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
    Alien tempAlien;
    tempAlien.setup(x, y);
    myAliens.push_back(tempAlien); //puts things at the end of your vector
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
 
    
    for(int i=0; i<myAliens.size(); i++){
        float distance = ofDist(x, y, myAliens[i].xPos, myAliens[i].yPos);
        if(distance< myAliens[i].diam/2){
            myAliens.erase(myAliens.begin() + i);
        }
    }
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
