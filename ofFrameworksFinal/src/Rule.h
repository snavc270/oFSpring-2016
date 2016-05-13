//
//  Rule.h
//  example
//
//  Created by Courtney Snavely on 5/9/16.
//
//

#ifndef Rule_h
#define Rule_h

#include "ofMain.h"



class Rule {
public:
    
    Rule(char a_, string b_) {
        a = a_;
        b = b_;
    }
    
    char getA() {
        return a;
    }
    
    string getB() {
        return b;
    }
    
protected:
    
    char a;
    string b;
};

#endif /* Rule_h */
