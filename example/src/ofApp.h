#pragma once

#include "ofMain.h"
#include "LSystem.h"
#include "Turtle.h"

#include "ofxGui.h"
#include "ofxLeapMotion2.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
	
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void exit();
    
	ofxLeapMotion leap;
	vector <ofxLeapMotionSimpleHand> simpleHands;
    
	vector <int> fingersFound;
	ofEasyCam cam;
    
    int generationNumber;
    LSystem * lsys;
    Turtle * turtle;
    
    ofxFloatSlider angle;
    float length = 5;
//    ofxFloatSlider length;
    ofxPanel gui;
    
    float distance[4];
    float totalDistance;
    ofPoint pt[5];
    int decay; 
    float theta;
    
    ofSoundPlayer mySound; 

};
