#pragma once
#include "ofMain.h"
#include "ofxLSystem.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void maybeDrawGui();

    ofxLSystem tree;
    ofxPanel   gui;
    ofParameter<ofVec3f> lightPos;
    ofxColorSlider materialColor;
    ofParameter<float> scale;
    ofParameter<float> thickness;
    bool       drawGui = true;
    ofLight    light;
    ofEasyCam  cam;
    ofShader   shader;
    ofVec2f    uResolution;
    ofVec2f    uTreeResolution;

    ofVec2f    uMinTree;
    ofVec2f    uMaxTree;
    float      maxHeight;

    
};
