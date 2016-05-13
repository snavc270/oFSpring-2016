//
//  Turtle.h
//  example
//
//  Created by Courtney Snavely on 5/9/16.
//
//

//#ifndef Turtle_h
#define Turtle_h


#pragma once
#include "ofMain.h"

class Turtle {
public:
    Turtle(string s, float l, float t) {
        todo = s;
        len = l;
        theta = t;
        
    }
    int roy, g, biv;
    int w= 10;
    void render(float theta, float len, int r, int g, int b) {
        ofNoFill();
        ofSetLineWidth(w);
        
        if(w>1){
            w*= .75;
        }
        
        ofSetColor(r,g, b);
        
       
        for (int i = 0; i < todo.length(); i++) {
            char c = todo.at(i);
            if (c == 'F' || c == 'G') {
                ofDrawLine(0,0,len,0);
                ofTranslate(len,0);
               
            }
            else if (c == '+') {
                ofRotateZ(ofRadToDeg(theta));
            }
            else if (c == '-') {
                ofRotateZ(ofRadToDeg(-theta));
            }
            else if (c == '[') {
                ofPushMatrix();
            }
            else if (c == ']') {
                ofPopMatrix();
            }
        }
         
    }
    
    void setLen(float l) {
        len = l;
    }
    
    void changeLen(float percent) {
        len *= percent;
    }
    
    void setToDo(string s) {
        todo = s;
    }
    
protected:
    
    string todo;
    float len;
    float theta;
};

