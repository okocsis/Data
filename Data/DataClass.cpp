

#include <iostream>
#include "DataClass.h"
using namespace std;
    
    DinamicStack::DinamicStack()
    {
        head = NULL;
    }
    DinamicStack::~DinamicStack()
    {
        while(head!=0)
        {
            Node *n=head;
            head=head->prevNode;
            delete n;
        }
    }
    bool DinamicStack::isEmpty()
    {
        return !(bool)head;
    }
    void DinamicStack::print(string &outDataTemplate)
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
    DataTemplate DinamicStack::top()
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
    DataTemplate DinamicStack::pop()
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
    void DinamicStack::push(DataTemplate value)
    {
        Node* tempNode = new Node;
        tempNode->data = value;
        tempNode->prevNode = head;
        head = tempNode;
    }

    
};

