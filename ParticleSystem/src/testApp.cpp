#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(0, 0, 0);

    box2d.init();
	box2d.setGravity(0, 0);
	//box2d.registerGrabbing(); 
	box2d.createBounds(ofGetWidth()*(-1), ofGetHeight()*(-1), ofGetWidth()*2, ofGetHeight()*2);
}

//--------------------------------------------------------------
void testApp::update(){
    
    box2d.update();
    ps.update();
    
    for (int i = 0; i < 7; i++ ) {
        
        //adding particles to the particle system. 
        //The inputs are box2d world, x position, y  position, radius, lifespan. 
        
       ps.addParticle(box2d, mouseX, mouseY, 3, int(ofRandom(80, 120)) );
    }

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

