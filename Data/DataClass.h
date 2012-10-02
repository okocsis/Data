#ifndef DataClass_h
#define DataClass_h

#include <iostream>

using namespace std;





class Node
{
public:
    string data;
    Node* prev;
    
    Node();
    Node(string inVal);
};



// lol


class DynamicStack
{
    Node* head;
    
public:
    DynamicStack();
    void print();
    bool isEmpty();
    string top();
    string pop();
    void push(string inVal);


};

#endif
