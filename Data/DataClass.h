#ifndef DataClass_h
#define DataClass_h

#include <iostream>

using namespace std;
template <typename DataTemplate>
class DataClass
{
public:
    class Node {
    public:
        DataTemplate data;
        Node* prevNode;
        Node() :  prevNode(NULL)
        {
        }
        Node(Node* inNode,DataTemplate inData) : data(inData), prevNode(inNode)
        {
        }
    };
    
    Node* head;
    
    virtual DinamicStack() : head(NULL)
    {}
    virtual ~DinamicStack();
    
    bool isEmpty();
    void print(string &outDataTemplate);
    DataTemplate top();
    DataTemplate pop();
    void push(DataTemplate value);

    
};



#endif
