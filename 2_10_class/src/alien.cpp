//
//  alien.cpp
//  2_10_class
//
//  Created by Courtney Snavely on 2/10/16.
//
//

#include "alien.hpp"

Alien::Alien(){
    xPos= ofRandom(0, ofGetWidth());
    yPos= ofRandom(0, ofGetHeight());
    xVel= ofRandom(-3,3);
    yVel= ofRandom(-3,3);
  
    
    diam= 100;
    
}

void Alien::setup(float _x, float _y){
    xPos= _x;
    yPos= _y; 
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    
}

void Alien::update(){
    
    if(xPos>ofGetWidth()-diam/2 || xPos<diam/2){
        xVel = -xVel;
    }
    xPos += xVel;
    
    if(yPos> ofGetHeight()-diam/2 || yPos<diam/2){
        yVel = -yVel;
    }
    yPos += yVel;
        
}

void Alien::draw(){
    ofSetColor(r, g, b);
    ofFill(); 
    ofEllipse(xPos, yPos, diam, diam);
    
    
}

