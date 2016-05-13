//
//  LSystem.h
//  example
//
//  Created by Courtney Snavely on 5/9/16.
//
//

#ifndef LSystem_h
#define LSystem_h
#include "Rule.h"

class LSystem
{
public:
    

    LSystem(string axiom, vector<Rule* > r) {
        sentence = axiom;
        ruleset.clear();
        ruleset.swap(r);
        generation = 0;
    }
    
    // Generate the next generation
    void generate() {
        string nextgen = "";
        // For every character in the sentence
        for (int i = 0; i < sentence.length(); i++) {
            // What is the character
            char curr = sentence.at(i);
            string replace = ofToString(curr);
            for (int j = 0; j < ruleset.size(); j++) {
                char a = ruleset[j]->getA();
                if (a == curr) {
                    replace = ruleset[j]->getB();
                    break;
                }
            }
            nextgen += replace;
        }
     
        sentence = nextgen;
    
        generation++;
    }
    
    string getSentence() {
        return sentence;
    }
    
    int getGeneration() {
        return generation;
    }
    
protected:
    
    
    string sentence;        // The sentence (a String)
    vector<Rule*> ruleset;   // The ruleset (a vector of Rule objects)
    int generation;         // Keeping track of the generation #
    
};
#endif /* LSystem_h */
