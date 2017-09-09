#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        
        // Define a triangle at the origin (0,0) that points to the right
        ofVec2f p1(0, 25.0);
        ofVec2f p2(100, 0);
        ofVec2f p3(0, -25.0);
        
        for (int i = 1; i < ofRandom(25); i ++) {
            
            // each triangle is a random distance apart
            ofVec2f triangleOffset(ofRandom(0, 25), 0);
            
            // Rotate the triangle points around the origin
            float rotation = ofRandom(360); // The rotate function uses degrees!
            p1.rotate(rotation);
            p2.rotate(rotation);
            p3.rotate(rotation);
            
            // Shift the triangle to the mouse position
            p1 += mousePos + triangleOffset;
            p2 += mousePos + triangleOffset;
            p3 += mousePos + triangleOffset;
            
            // randomise amount of red and blue
            float red  = ofRandom(255);
            float blue = ofRandom(255);
            
            ofSetColor(red, 0, blue, 50);
            ofDrawTriangle(p1, p2, p3);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
