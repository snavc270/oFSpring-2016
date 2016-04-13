//
//  Circle.hpp
//  zenoToMouse
//
//  Created by Courtney Snavely on 4/11/16.
//
//

#ifndef Circle_hpp
#define Circle_hpp
#include "ofMain.h"
#include <stdio.h>

class Circle{
public:
    Circle();
    
    void draw();
    
 
    
    void zenoToPoint(float catchX, float catchY);
    float catchUpSpeed;
    
    ofPoint posA, posB, pos;
    
    
};

#endif /* Circle_hpp */
