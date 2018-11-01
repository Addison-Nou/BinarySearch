#pragma once

using namespace std;

class Node{

    Node* left, *right, *parent;
    int key;
    
    public:
        Node();
        Node* TreeInsert(Node* node, int key);
        int InOrderTreeWalk(Node* node);
        int setKey(int key);
};