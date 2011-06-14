#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(255, 255, 255);
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    
    
	box2d.init();
	box2d.setGravity(0,10);
	box2d.registerGrabbing(); 
	box2d.createBounds(-100, -100, ofGetWidth(), ofGetHeight());
    
    numberOfBalls = 5;
    
    for (int i = 0; i < numberOfBalls; i++) {
  
        ofxBox2dCircle  circle1;
        circle1.setPhysics(0, 0.0, 0.6);
        circle1.setup( box2d.getWorld(), 400+41*i, 100, 5, false);
        stationaryCircles.push_back(circle1);
        
        ofxBox2dCircle  circle2;
        circle2.setPhysics(30, 1.0, 0.0);
        circle2.setup( box2d.getWorld(), 400+41*i, 300, 20, false);
        movingCircles.push_back(circle2);
        
        ofxBox2dJoint joint;
        joint.setWorld(box2d.getWorld());
        joint.addJoint(stationaryCircles[i].body, movingCircles[i].body, 0.0f, 0.6f, false);
        
        chainJoints.push_back(joint);

    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    box2d.update();
  

}
//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i = 0; i < numberOfBalls; i++ ) {  
        
        ofSetColor(120, 255, 255);
        
        ofFill();
        stationaryCircles[i].draw();
        movingCircles[i].draw();
        
        ofLine(stationaryCircles[i].getPosition().x, 
               stationaryCircles[i].getPosition().y,
               movingCircles[i].getPosition().x, 
               movingCircles[i].getPosition().y);       
        
    }

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
    
    
    //ps.addParticle(&box2d, 100, 100, 2, 100, 50, 255);
    
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

