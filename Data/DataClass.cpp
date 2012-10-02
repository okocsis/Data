

#include <iostream>
#include "DataClass.h"


using namespace std;




//    DataClass::DataClass()
//    {}
//
//    DataClass::~DataClass()
//    {
//        while(head!=0)
//        {
//            Node *n=head;
//            head=head->prevNode;
//            delete n;
//        }
//    }
    template <typename DataTemplate>
    bool DataClass<DataTemplate>::isEmpty()
    {
        return !(bool)head;
    }
    template <typename DataTemplate>
    void DataClass<DataTemplate>::print(string &outDataTemplate)
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
    template <typename DataTemplate>
    DataTemplate DataClass<DataTemplate>::top()
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
    template <typename DataTemplate>
    DataTemplate DataClass<DataTemplate>::pop()
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
    template <typename DataTemplate>
    void DataClass<DataTemplate>::push(DataTemplate value)
    {
        Node* tempNode = new Node;
        tempNode->data = value;
        tempNode->prevNode = head;
        head = tempNode;
    }




    template <typename DataTemplate>
    void DataClass<DataTemplate>::PrintOut(){}
    template <typename DataTemplate>
    DataTemplate DataClass<DataTemplate>::GetValue(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::StepNext(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::RemoveAct(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::InsertLast(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::InsertAfter(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::RemoveFirst(){}
    template <typename DataTemplate>
    void DataClass<DataTemplate>::RemoveLast(){}

int main(){return 0;}
