
/**************************
 
This programs demonstrates the creation of a simple particle system. 
Random particles are generated from the position of the mouse. 
After a certain lifespan, they die out and are deleted from the vector of particles.
 
***************************/

#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "ofxBox2d.h"
#include "Particle.h"
#include "ParticleSystem.h"

//-------------------------------------

class testApp : public ofBaseApp{

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
    
    
        ParticleSystem ps;
    
        ofxBox2d    box2d;

};

#endif
