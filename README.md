ofx3jOpenVR
====================
This is a fork of https://github.com/smallfly/ofxOpenVR

I remember this was working in 2018 with OF 0.10 on Windows 10 and Oculus CV1.
I took out some deprecated OpenVR functions in order to make it compile.
I am uploading this to be helpful, I have currently no way of testing this.
Meanwhile, there must be a newer version of OpenVR than the one i updated. But if this here still works, who cares.
Remember: you have to install openVR/Steam.

Follow the original instructions from smallfly:

Implementation of Valve Software's [OpenVR](https://github.com/ValveSoftware/openvr) API.

## Usage

1. Create an openframeworks' project using the Project Generator, or add the addon's source files and the OpenVR headers to your existing project.
2. In `Property Manager` (open it from `View -> Other Windows -> Property Manager`), right click on your project to select `Add Existing Property Sheet...` and select the `ofxOpenVR.props` file.

## Notes
Tested with the HTC Vive Pre and the Oculus consumer version on Windows 10.
