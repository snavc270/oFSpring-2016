//
//  Neurons.cpp
//  recursionMidterm
//
//  Created by Courtney Snavely on 2/21/16.
//
//

#include "Neurons.hpp"
#include "ofMain.h"

void Neurons::polylineSetUp(float length, float width, float theta){
    polyline.lineTo(0, -length);
    polyline.lineTo(0, -length);
    
    
    polyline.lineTo(width*.1, -length*.9);
    polyline.lineTo(width*.12, -length*.8);
    polyline.lineTo(width*.1, -length*.7);
//    polyline.lineTo(width*.12, -length*.8);
//    polyline.lineTo(width*.1, -length*.9);
//    polyline.lineTo(0, -length);
//    polyline.lineTo(0, -length);
    
    polyline.draw();
}

void Neurons::drawBranch(float length, float width, float theta){
    
    
    
    polylineSetUp(length, width, theta);
    //    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    length= length*0.5;
    width= width*.5;
    
    
    
    if(length>2 && width>1){
        ofPushMatrix();
        
        ofRotate(theta);
        drawBranch(length, width, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, width, theta);
        ofPopMatrix();
  }
}

void Neurons::setup(){
  
    
}

void Neurons::update(){

}

void Neurons::draw(){
    ofSetColor(3, 252, 200); 

    ofTranslate(ofGetWidth()/2, ofGetHeight());
    
  
    drawBranch(100, 100, 15);
    polylineSetUp(100, 100, 15);
//
    
    
}





