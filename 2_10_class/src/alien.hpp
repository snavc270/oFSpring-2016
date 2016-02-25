//
//  alien.hpp
//  2_10_class
//
//  Created by Courtney Snavely on 2/10/16.
//
//

#ifndef alien_hpp
#define alien_hpp
#include "ofMain.h"

#include <stdio.h>

#endif /* alien_hpp */

class Alien{
public:
    
    //properties
    
    int xPos;
    int yPos;
    int xVel;
    int yVel;
    
    int r, g, b;
    
    int diam;
    
    Alien();
    
    void setup(float _x, float _y);
    void update();
    void draw(); 
};
