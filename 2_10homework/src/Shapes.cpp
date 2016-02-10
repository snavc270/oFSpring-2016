//
//  Shapes.cpp
//  2_10homework
//
//  Created by Courtney Snavely on 2/8/16.
//
//

#include "Shapes.hpp"

Shapes::Shapes(){
    
    r= 1;
  
    
    
    
    
}

void Shapes::draw(){
    
    
    
    
    float x= r*cos(theta);
    float y= r*sin(theta);

    ofNoFill();
    
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 120+r, 120+r);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 150+r, 90+r);
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 90+r, 150+r);
    
    ofEllipse(ofGetWidth()/2-25+x, ofGetHeight()/2+y, 120+r, 120+r);
    ofEllipse(ofGetWidth()/2-25+x, ofGetHeight()/2+y, 150+r, 90+r);
    ofEllipse(ofGetWidth()/2-25+x, ofGetHeight()/2+y, 90+r, 150+r);
    
    ofEllipse(ofGetWidth()/2+25-x, ofGetHeight()/2-y, 120+r, 120+r);
    ofEllipse(ofGetWidth()/2+25-x, ofGetHeight()/2-y, 150+r, 90+r);
    ofEllipse(ofGetWidth()/2+25-x, ofGetHeight()/2-y, 90+r, 150+r);
    
    ofEllipse(ofGetWidth()/2+x, ofGetHeight()/2-25-y, 120+r, 120+r);
    ofEllipse(ofGetWidth()/2+x, ofGetHeight()/2-25-y, 150+r, 90+r);
    ofEllipse(ofGetWidth()/2+x, ofGetHeight()/2-25-y, 90+r, 150+r);
    ofEllipse(ofGetWidth()/2-x, ofGetHeight()/2+25+y, 120+r, 120+r);
    ofEllipse(ofGetWidth()/2-x, ofGetHeight()/2+25+y, 150+r, 90+r);
    ofEllipse(ofGetWidth()/2-x, ofGetHeight()/2+25+y, 90+r, 150+r);
    
    
    
}

void Shapes::update(){
    theta+= .1;

    
}

void Shapes::grow(){
    r++;

    cout<< "grow" << endl;
}