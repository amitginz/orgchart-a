#include <iostream>
using namespace std;
struct Node{
    string data;
    struct Node *left,*right;
};

Node* addnode(string data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}