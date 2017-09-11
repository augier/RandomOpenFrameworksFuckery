//
//  Word.cpp
//  randomWordGenerator
//
//  Created by Chris Augier on 11/09/2017.
//
//

#include "Word.h"

Word::Word(){
}

void Word::setup(){
    contents = fetchWord();
    x = ofRandom(ofGetWidth());
    y = ofRandom(ofGetHeight());
}

void Word::draw(){
    ofDrawBitmapString(contents, x, y);
}

string Word::fetchWord(){
    ofHttpResponse resp = ofLoadURL("http://setgetgo.com/randomword/get.php");
    return string(resp.data);
}
