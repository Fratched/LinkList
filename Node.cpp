#include "Node.h"

Node::Node(int value) {
    data = value;
    next = nullptr;
    radius = ofMap(data, 0, 100, 20, 50); // Map data to a radius
}

void Node::draw() {
    ofSetColor(100, 150, 200); // Set node color
    ofDrawCircle(position, radius); // Draw the node as a circle
    ofSetColor(255); // Set text color
    ofDrawBitmapString(ofToString(data), position.x - 5, position.y + 5); // Draw the data value
}