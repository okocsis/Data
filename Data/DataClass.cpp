

#include <iostream>
#include "DataClass.h"
using namespace std;
    
    DataClass::DataClass() : head(NULL){}

    DataClass::~DataClass()
    {
        while(head!=0)
        {
            Node *n=head;
            head=head->prevNode;
            delete n;
        }
    }
    bool DataClass::isEmpty()
    {
        return !(bool)head;
    }
    void DataClass::print(string &outDataTemplate)
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
    DataTemplate DataClass::top()
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
    DataTemplate DataClass::pop()
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
    void DataClass::push(DataTemplate value)
    {
        Node* tempNode = new Node;
        tempNode->data = value;
        tempNode->prevNode = head;
        head = tempNode;
    }

    
};

