//
//  Particle.h
//  ParticleSystem
//
//  Created by Willy Chyr on 11-05-31.
//  Copyright 2011 Willy Chyr. All rights reserved.
//


#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"
#include "ofxBox2d.h"

//-----------------------------------

class Particle : public ofxBox2dCircle {
    
public:
    
	float radius;
	float timer;
    
    int r;
    int g;
    int b;
	
	void update();
	void draw();
	
	bool dead;
    
};

#endif