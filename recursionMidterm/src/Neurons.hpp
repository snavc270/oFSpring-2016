//
//  Neurons.hpp
//  recursionMidterm
//
//  Created by Courtney Snavely on 2/21/16.
//
//

#ifndef Neurons_hpp


#include "ofMain.h"
#define Neurons_hpp

#include <stdio.h>

class Neurons{
    
public:
    void setup();
    void update();
    void draw();
    

    
    ofPolyline polyline;
    ofPath path;
    
    
    
    void drawBranch(float length, float width, float theta);
    void polylineSetUp(float length, float width, float theta);
    
    
    
};

#endif /* Neurons_hpp */
