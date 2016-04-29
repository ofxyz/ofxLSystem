#pragma once
#include "ofMain.h"
#include "ofxLSBranch.h"

class ofxLSTriangle {
public:
    ofxLSTriangle();
    void generate(ofMesh& mesh, const ofxLSBranch branch);
    void setResolution(int _resolution){resolution = _resolution;};
private:
    int resolution = 32;
};
