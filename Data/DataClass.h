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
    
    virtual bool isEmpty();
    virtual void print(string &outDataTemplate);
    virtual DataTemplate top();
    virtual DataTemplate pop();
    virtual void push(DataTemplate value);
    
    
    
    virtual void PrintOut();
    virtual DataTemplate GetValue();
    virtual void StepNext();
    virtual void RemoveAct();
    
    virtual void InsertLast();
    virtual void InsertAfter();
    virtual void RemoveFirst();
    virtual void RemoveLast();
    

    
};



#endif
