//
//  Person.cpp
//  classes
//
//  Created by Courtney Snavely on 2/3/16.
//
//

#include "Person.hpp"
#include "ofMain.h"

void Person::eat(){
    
    cout<< "I'm eating" << endl;

}
void Person::sleep(){
    
    cout<<"I'm sleeping"<< endl;
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
}

void Person::hello(){
    cout<<"Hello my name is "<< name <<endl;
}
void talk();
void lie();