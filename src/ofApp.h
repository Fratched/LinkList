#pragma once

#include "ofMain.h"
#include "../LinkedList.cpp"

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
		








		
			

			LinkedList list;
			float amplitude = 50; // Oscillation amplitude
			float time = 0;       // Time for animation
			float panOffset = 0;  // Camera pan offset
		
};
