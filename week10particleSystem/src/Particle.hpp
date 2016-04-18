//
//  Particle.hpp
//  particleSystem
//
//  Created by Courtney Snavely on 4/13/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp
#include "ofMain.h" 
#include <stdio.h>
#include "Params.hpp"
#include "ofxGui.h"

#endif /* Particle_hpp */

class Particle{
public:
    Particle();
    void setup();
    void update(float dt);
    void addRepulsion(float px, float py, float radius, float strength);
    void addAttraction(float px, float py, float radius, float strength);
    void addGravity(float px, float py, float radius, float strength);
    void draw();
    
    Params param;
//    ofPoint pos;
//    ofPoint vel;
    float time; //time since birth
    float lifeTime; //max life
    bool live;

    
    ofPoint randomPointInCircle(float maxRad);
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f force;
    
    
    
};