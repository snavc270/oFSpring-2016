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
    polyline.curveTo(0, -length);
    polyline.curveTo(0, -length);
    polyline.curveTo(width*.1, -length*.9);
    polyline.curveTo(width*.12, -length*.8);
    polyline.curveTo(width*.1, -length*.7);
    
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

//    path.moveTo(ofGetWidth()/2 + 50, ofGetHeight()*.8);
//    path.arc(ofGetWidth()/2, ofGetHeight()*.8, 50, 75, 0, 180);
//    path.setFilled(false);
//    path.setStrokeWidth(1);
//    path.draw();
//    path.moveTo(300 + 200, 300);
//    path.arc(300, 300, 200, 200, 0, 180);
//    path.setFilled(false);
//    path.setStrokeWidth(1);
//    path.draw();
//
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(100, 100, 15);

}





