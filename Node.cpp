#include <iostream>
#include "Node.h"

using namespace std;

//Defining constructor
Node::Node(){
    this->left = NULL;
    this->right = NULL;
    Node* parent;
}

//Recursive function to insert node into the tree
Node* Node::TreeInsert(Node* node, int key){

    //Creating a new node to use
    Node* add = new Node();
    add->key = key;
    add->left = NULL;
    add->right = NULL;

    if (node == NULL){ return add; }   //If the tree is empty, add the new node
    else {
        //Otherwise walk down the tree
        if (node->key >= key){  node->left = TreeInsert(node->left, key); }    //If the current node's key is greater than the key we want to insert, recurse the function with the node's left node and the key
        else { node->right = TreeInsert(node->right, key); }//Else recurse the function with right node and the key
    }
};

//Walk through the tree and print out the node keys in order
int Node::InOrderTreeWalk(Node* node){  
    if(node != NULL){
        InOrderTreeWalk(node->left);    //Walk left
        cout << node->key << endl;  //Print out the node
        InOrderTreeWalk(node->right);   //Walk right
    }
};

//Setter for node key
int Node::setKey(int key){
    this->key = key;
}