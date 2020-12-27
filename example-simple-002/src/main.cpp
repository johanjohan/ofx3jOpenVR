#include "ofMain.h"
#include "ofApp.h" 

//========================================================================
int main() {
	ofGLWindowSettings settings;
	settings.setGLVersion(4, 5);
	settings.setSize(1280, 720); //3j
	ofCreateWindow(settings);
	ofRunApp(new ofApp());
}
