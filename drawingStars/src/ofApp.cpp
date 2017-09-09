#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        // randomise the number of lines between 25 + 50
        float numLines = ofRandom(25, 500);
        
        for (int i = 25; i < numLines; i++) {
            // each line is a random length between 30 and 50
            float length = ofRandom(30, 50);
            
            // each line should point at a random angle (between 0 and 360)
            float angle = ofRandom(ofDegToRad(360));
            
            cout << angle;
            
            float offsetX = cos(angle) * length;
            float offsetY = sin(angle) * length;
            
            float alpha = ofMap(length, 30, 50, 255, 0);
            ofSetColor(255, alpha);
            
            ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX() + offsetX, ofGetMouseY() + offsetY);
        }
    }
    ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
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
