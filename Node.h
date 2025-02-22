
#pragma once

#include "ofMain.h"

class Node {
public:
    int data;          // Data stored in the node
    Node* next;        // Pointer to the next node
    ofVec2f position;  // Position for rendering
    float radius;      // Radius of the circle (based on data)

    Node(int value);
    void draw();
};