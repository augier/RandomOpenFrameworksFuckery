#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        drawSomeRectangles(ofGetMouseX(), ofGetMouseY());
    }
}




void ofApp::drawSomeRectangles(float x, float y){
    // do the colours
    float randomRed   = ofRandom(255);
    float randomGreen = ofRandom(255);
    float randomBlue  = ofRandom(255);
    float randomAlpha = ofRandom(255);
    ofSetColor(randomRed, randomGreen, randomBlue, randomAlpha);
    
    // draw up to 10
    for (int i = 1; i < ofRandom(10); i++) {
        // heights between 10 and 50
        float width  = ofRandom(10, 50);
        float height = ofRandom(10, 50);
        
        // offset up to ±10px in all directions
        float offsetX = ofRandom(-10, 10);
        float offsetY = ofRandom(-10, 10);
        
        ofDrawRectangle(x + offsetX, y + offsetY, width, height);
    }

}

