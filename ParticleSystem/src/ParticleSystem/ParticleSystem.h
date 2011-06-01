//
//  ParticleSystem.h
//  ParticleSystem
//
//  Created by Willy Chyr on 11-05-31.
//  Copyright 2011 Willy Chyr. All rights reserved.
//


#ifndef PARTICLE_SYSYTEM_H
#define PARTICLE_SYSYTEM_H

#include "ofMain.h"
#include "Particle.h"


class ParticleSystem {
public:

	void update();
	void draw();
	
	void addParticle(ofxBox2d _box2d, float _posX, float _posY, float _radius, float _timer);
    vector <Particle> particles;

	
};

#endif