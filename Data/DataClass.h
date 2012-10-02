#ifndef DataClass_h
#define DataClass_h

#include <iostream>

template <typename DataTemplate>

//typedef int DataTemplate;
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
    DataClass();
    virtual ~DataClass();
protected:
    virtual bool isEmpty();
    virtual void print(std::string &outDataTemplate);
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
