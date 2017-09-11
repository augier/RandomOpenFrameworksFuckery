//
//  Word.hpp
//  randomWordGenerator
//
//  Created by Chris Augier on 11/09/2017.
//
//

#ifndef Word_hpp
#define Word_hpp

#include <stdio.h>
#include "ofMain.h"

class Word {
    
    public:
    
    void setup();
    void update();
    void draw();
    
    string contents;
    int x;
    int y;
    
    Word();
    
    private:
    
    string fetchWord();
};

#endif /* Word_hpp */
