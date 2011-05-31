#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(0, 0, 0);
    
    //--- SETUP BOX2D
    box2d.init();
	box2d.setGravity(0, 5);
	//box2d.registerGrabbing(); 
	box2d.createBounds(ofGetWidth()*(-1), ofGetHeight()*(-1), ofGetWidth()*2, ofGetHeight()*2);
    
    angle = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    
    box2d.update();
    ps.update();
    
    for (int i = 0; i < 5; i++ ) {
        
        //adding particles to the particle system. The particles are drawn in a circle. 
        //The inputs are box2d, x position, y position, radius, lifespan. 
        
        positionX = ofGetWidth()/2 + sin(angle)*300;
        positionY = ofGetHeight()/2 + cos(angle)*300;
        
       ps.addParticle(box2d, positionX, positionY, 2, int(ofRandom(80, 180)) );
    }
    
    angle += PI/180;
}

//--------------------------------------------------------------
void testApp::draw(){

    ps.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    /******
    If you want to create particle by clicking mouse, uncomment the line below
    ******/
    
    //ps.addParticle(box2d, mouseX, mouseY, 20, 150);
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

