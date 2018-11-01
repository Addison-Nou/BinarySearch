#include <iostream>
#include <fstream>
#include "Node.h"
#include <string>

using namespace std;

int main()
{
    int key;
    string filename = "";

    cout << "Input file name: ";    //Asking user for input
    cin >> filename;

    Node* root = new Node();

    ifstream input (filename);   //Openeing input file

    while (!input.eof()){    //While there are still lines in the file
        input >> key;   //Update the key
        Node* node = new Node();    //Create a new node to add
        node->setKey(key);  //Set the new node's key to the input file key
        node->TreeInsert(root, key);    //Call insert function to insert the node into the right place
    }

    //Print out the binary tree in order
    root->InOrderTreeWalk(root);
}