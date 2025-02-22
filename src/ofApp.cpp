#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetFrameRate(60);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    time += 0.05; // Increment time for animation
    Node* current = list.head;
    float x = 100 + panOffset; // Starting x position
    while (current != nullptr) {
        float y = ofGetHeight() / 2 + amplitude * sin(time + x * 0.01); // Oscillate y position
        current->position.set(x, y);
        x += 100; // Space between nodes
        current = current->next;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    list.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'q') { // Insert at head
        list.insertAtHead(ofRandom(1, 100));
    }
    else if (key == 'w') { // Insert at tail
        list.insertAtTail(ofRandom(1, 100));
    }
    else if (key == 'a') { // Delete head
        list.deleteHead();
    }
    else if (key == 's') { // Delete tail
        list.deleteTail();
    }
    if (key == 'z') { // Increase amplitude
        amplitude += 10;
    }
    else if (key == 'x') { // Decrease amplitude
        amplitude -= 10;
    }
    else if (key == OF_KEY_LEFT) { // Pan left
        panOffset += 20;
    }
    else if (key == OF_KEY_RIGHT) { // Pan right
        panOffset -= 20;
    }
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
