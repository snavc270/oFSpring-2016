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

    
    
//    for(int i=0; i<6; i++){
//        
//    polyline.lineTo(ofGetWidth()/2-100*i,ofGetHeight()/2-100*i);
//    polyline.lineTo(ofGetWidth()/2+100*i,ofGetHeight()/2-100*i);
//    polyline.lineTo(ofGetWidth()/2+100*i,ofGetHeight()/2+100*i);
//    polyline.lineTo(ofGetWidth()/2-100*i,ofGetHeight()/2+100*i);
//    polyline.close();
//    
//    polyline.draw();
//        
//    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='r'){
        if(red < 0){
            red++;
        }else{
            red--;
        }
        cout<< red << endl; 
  
    }
    if(key=='g'){
        if(g >0){
            g--;
        }else{
            g++;
        }
    }
    
    if(key=='b'){
        if( b >0){
        b--;
        }else{
            b++;
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
