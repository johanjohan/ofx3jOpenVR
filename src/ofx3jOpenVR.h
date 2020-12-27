#pragma once

#include "ofxOpenVR.h"

/*
	https://github.com/ValveSoftware/openvr
	https://github.com/smallfly/ofxOpenVR
	
	
    Create an openframeworks' project using the Project Generator, 
	or add the addon's source files and the OpenVR headers to your existing project.
	
    In Property Manager (open it from View -> Other Windows -> Property Manager), 
	right click on your project to select Add Existing Property Sheet... 
	and select the ofxOpenVR_XXX.props file.


*/

/*
	3j 201807
		made it work in of 0.10

	removed

		// Don't draw controllers if somebody else has input focus
		if (_pHMD->IsInputFocusCapturedByAnotherProcess()) {
			return;
		}


	removed openvr_api_public.cpp to not get LNK already defined errors



*/


