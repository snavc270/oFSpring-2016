//
//  Params.hpp
//  particleSystem
//
//  Created by Courtney Snavely on 4/13/16.
//
//

#ifndef Params_hpp
#define Params_hpp
#include "ofMain.h"
#include <stdio.h>

class Params{
public:
    void setup();
    ofPoint eCenter;
    float eRad;
    float velRad;
    float lifeTime;
    float rotate;
    
    float attraction;
    float repulsion;
    
    float friction;
    float spinning; 
    
};
#endif /* Params_hpp */
