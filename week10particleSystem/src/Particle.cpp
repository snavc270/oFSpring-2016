//
//  Particle.cpp
//  particleSystem
//
//  Created by Courtney Snavely on 4/13/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live = false;
}


//returns a random point
ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, 2*PI);
    pnt.x = cos(angle)*rad;
    pnt.y = sin(angle)*rad;
    return pnt;
}

void Particle::setup(){

    
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){
    if(live){
    vel += force;
    pos += vel;
    time += dt;
    
    if(time>= lifeTime){
        live = false;
    }
    }
}

void Particle::draw(){
    if(live){
        float size = ofMap(time, 0, lifeTime, 1, 10);
        ofColor color = ofColor::red;
        float hue = ofMap(time, 0, lifeTime, 120, 255);
        color.setHue(hue);
        ofSetColor(color);
        ofDrawCircle(pos, size); 
    }
    

    
}

void Particle::addRepulsion(float px, float py, float radius, float strength){
    ofVec2f posOfForce;
    posOfForce.set(px, py);

 

    
    ofVec2f diff = pos- posOfForce;
    
    if(diff.length()<radius){
        float percent = 1- (diff.length()/ radius);
        diff.normalize();
        force.x += diff.x * percent *strength;
        force.y += diff.y * percent * strength; 
    }
}

void Particle::addAttraction(float px, float py, float radius, float strength){
    ofVec2f posOfForce;
    posOfForce.set(px, py);
    
    ofVec2f diff = pos - posOfForce;
    
    if(diff.length()<radius){
        float percent = 1- (diff.length()/radius);
        diff.normalize();
        force.x -= diff.x * percent * strength;
        force.y -= diff.y * percent * strength;
    }
}

void Particle::addGravity(float px, float py, float radius, float strength){
    ofVec2f posOfForce;
    posOfForce.set(px, py);
    
    ofVec2f diff = pos - posOfForce;
    
    if(diff.length()< radius){
        float percent = 1- (diff.length()/ radius);
        diff.normalize();
        force.x -= diff.x *percent * strength;
        force.y -= diff.y * percent * strength;
    }
}







