//#include <iostream>
//#include <fstream>
//#include "DynamicStack.h"
//
//
//using namespace std;
//
//
//
//Node::Node()
//{
//    prev = NULL;
//    data = "";
//}
//
//Node::Node(string inVal)
//{
//    prev = NULL;
//    
//    data = inVal;
//}
//
//DynamicStack::DynamicStack()
//{
//    head = new Node;
//}
//
//void DynamicStack::print()
//{
//    Node* tempHead = this->head;
//    
//    while (tempHead != NULL)
//    {
//        cout<<tempHead->data<< "\n";
//        tempHead = tempHead->prev;
//    }
//}
//
//bool DynamicStack::isEmpty()
//{
//    return !(head->prev);
//}
//
//string DynamicStack::top()
//{
//    if (!isEmpty())
//    {
//        return head->data;
//    }
//    else
//    {
//        throw (string)"Stack is empty";
//    }
//    
//    return "";
//}
//
//string DynamicStack::pop()
//{
//    string temp = "";
//    Node* tempHead(NULL);
//    if (!isEmpty())
//    {
//        tempHead = head;
//        temp = head->data;
//        head = head->prev;
//        delete  tempHead;
//    }
//    else
//    {
//        throw (string)"Stack is empty";
//    }
//    return temp;
//}
//
//void DynamicStack::push(string inVal)
//{
//    Node* temp = new Node (inVal);
//    temp->prev = head;
//    head = temp;
//    head->data = inVal;
//}



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
    
    DinamicStack()
    {
        head = NULL;
    }
    bool isEmpty()
    {
        return !(bool)head;
    }
    void print(string &outDataTemplate)
    {
        //                Node* tempPtr;
        //                tempPtr = this->head;
        //        stringstream stream;
        //                while (tempPtr != NULL)
        //                {
        //
        //                    outDataTemplate. (tempPtr->data + "\n");
        //                    tempPtr = tempPtr->prevNode;
        //                }
    }
    DataTemplate top()
    {
        if (!isEmpty())
        {
            return head->data;
        }
        else
        {
            throw (string)"nemjo";
        }
        return 0;
    }
    DataTemplate pop()
    {
        if (isEmpty()) {
            throw (string)"nemjo";
        }
        DataTemplate tempData = head->data;
        Node* tempHead = head;
        head = head->prevNode;
        delete tempHead;
        
        return tempData;
    }
    void push(DataTemplate value)
    {
        Node* tempNode = new Node;
        tempNode->data = value;
        tempNode->prevNode = head;
        head = tempNode;
    }
    ~DinamicStack()
    {
        while(head!=0)
        {
            Node *n=head;
            head=head->prevNode;
            delete n;
        }
    }
    
};

