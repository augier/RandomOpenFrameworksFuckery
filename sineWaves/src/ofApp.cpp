#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // set the background to black for maximum contrast
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < 10; i++) {
        float a = ofRandom(0, 50);
        float f = ofRandom(0, 1);
        float o = ofRandom(0, ofGetWindowHeight());
        
        drawSine(a, f, 0.1, o);

    }
    
}

// drawSine will draw a sine wave with the specified height and
// amplitude which consists of small lines of length resolution
// and offset offsetY
void ofApp::drawSine(float amplitude, float frequency, float resolution, float offsetY){
    float oldX    = 0;
    float oldY    = 0;
    
    
    for (float x=0; x< ofGetWindowWidth(); x = x+resolution) {
        int y = amplitude * sin(x * frequency);
        ofDrawLine(oldX, oldY + offsetY, x, y + offsetY);
        
        // sort the old x and y
        oldX = x;
        oldY = y;
    }

}
