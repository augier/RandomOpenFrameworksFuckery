#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    player.load("song.mp3");
    player.play();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int nBandsToGet = 128;
    int nFreqsToGet = 256;
    
    float * fftSmoothed = ofSoundGetSpectrum(nBandsToGet);
    
    float * val = ofSoundGetSpectrum(nBandsToGet);
    for (int i = 0; i < nBandsToGet; i++) {
        fftSmoothed[i] *= 0.96f;
        if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
    }
    
    float width = (float)5;
    for (int i = 0; i < nBandsToGet; i++) {
        ofDrawRectangle(100 + i * width, ofGetHeight() - 100, width, -(fftSmoothed[i] * 200));
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
