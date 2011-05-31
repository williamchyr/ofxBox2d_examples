//
//  ParticleSystem.cpp
//  ParticleSystem
//
//  Created by Willy Chyr on 11-05-31.
//  Copyright 2011 Willy Chyr. All rights reserved.
//

#include "ParticleSystem.h"


ParticleSystem::ParticleSystem() {
	
}

void ParticleSystem::update() {
	for(int i=0; i < particles.size(); i++) {
		particles[i].update();
		if(particles[i].dead) {
            particles[i].destroyShape();
			particles.erase( particles.begin()+i );
		}
	}
}

void ParticleSystem::draw() {
	for(int i=0; i< particles.size(); i++) {
		particles[i].draw();
	}
}

void ParticleSystem::addParticle(ofxBox2d _box2d, float _posX, float _posY, float _radius, float _timer) {
    
    Particle p;
    
    p.radius = _radius;
    p.timer = _timer;
    p.dead = false;
    
    p.setPhysics(10, 0.5, 0.6);
	p.setup(_box2d.getWorld(), _posX, _posY, p.radius, false);
    
    p.setVelocity(ofRandom(-4, 4), ofRandom(-4, 4) );
                
    //setting the colors of the particles
    p.r = ofRandom(0, 255);
    p.g = 255;
    p.b = ofRandom(0, 255);
    
    particles.push_back(p);
    
}


bool ParticleSystem::dead() {
	if(particles.size() == 0) {
		return true;
	} else {
		return false;
	}
}