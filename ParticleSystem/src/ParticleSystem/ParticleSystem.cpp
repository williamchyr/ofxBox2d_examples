#include "ParticleSystem.h"

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
    
    p.dead = false;
    
    
    p.setPhysics(10, 0.5, 0.6);
	p.setup(_box2d.getWorld(), _posX, _posY, _radius, false);
    
    //set velocity in x and y direction to be random number between -3 and 3
    p.setVelocity(ofRandom(-4, 4), ofRandom(-3, 3) );
                  
    p.timer = _timer;

    //setting the colors of the particles
    p.r = int(ofRandom(0, 255));
    p.g = int(ofRandom(0, 255));
    p.b = 255;
    
    particles.push_back(p);
    
}

