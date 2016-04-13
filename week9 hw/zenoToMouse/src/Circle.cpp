//
//  Circle.cpp
//  zenoToMouse
//
//  Created by Courtney Snavely on 4/11/16.
//
//

#include "Circle.hpp"
Circle::Circle(){
    posA.x = 10;
    posA.y = 10;
    
    posB.x = 1000;
    posB.y = 10;
    
    
}

void Circle::draw(){
    ofSetColor(0, 255, 255);
    ofDrawCircle(pos.x, pos.y, 50, 50);
    
}


void Circle::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed *catchX + (1- catchUpSpeed)*pos.x;
    
    pos.y = catchUpSpeed *catchY + (1- catchUpSpeed)*pos.y;
}