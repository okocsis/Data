
#include <iostream>
#include "DataClass.h"

using namespace std;

template<typename DataTemplate>
DataClass<DataTemplate>::DataClass() :
		head(NULL)
{
}
template<typename DataTemplate>
DataClass<DataTemplate>::~DataClass()
{
	while (head != 0)
	{
		Node *n = head;
		head = head->prevNode;
		delete n;
	}
}
template<typename DataTemplate>
bool DataClass<DataTemplate>::isEmpty()
{
	return !(bool) head;
}
template<typename DataTemplate>
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
template<typename DataTemplate>
DataTemplate DataClass<DataTemplate>::top()
{
	if (!isEmpty())
	{
		return head->data;
	}
	else
	{
		throw(string) "nemjo";
	}
	return 0;
}
template<typename DataTemplate>
DataTemplate DataClass<DataTemplate>::pop()
{
	if (isEmpty())
	{
		throw(string) "nemjo";
	}
	DataTemplate tempData = head->data;
	Node* tempHead = head;
	head = head->prevNode;
	delete tempHead;

	return tempData;
}
template<typename DataTemplate>
void DataClass<DataTemplate>::push(DataTemplate value)
{
	Node* tempNode = new Node;
	tempNode->data = value;
	tempNode->prevNode = head;
	head = tempNode;
}

template<typename DataTemplate>
void DataClass<DataTemplate>::PrintOut()
{
}
template<typename DataTemplate>
DataTemplate DataClass<DataTemplate>::GetValue()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::StepNext()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::RemoveAct()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::InsertLast()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::InsertAfter()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::RemoveFirst()
{
}
template<typename DataTemplate>
void DataClass<DataTemplate>::RemoveLast()
{
}

int main()
{

//    typedef DataClass<int> List;
//    try
//    {
//        List fibonacci;
//        cout << "--- Egy \"int\"-eket tartalmazo lista tesztelese ---\n";
//        cout << "Be: 0" << endl; fibonacci.InsertLast(0);
//        cout << "Be: 1" << endl; fibonacci.InsertLast(1);
//        cout << "Be: 1" << endl; fibonacci.InsertLast(1);
//        cout << "Be: 2" << endl; fibonacci.InsertLast(2);
//        cout << "Be: 3" << endl; fibonacci.InsertLast(3);
//        cout << "Be: 5" << endl; fibonacci.InsertLast(5);
//        cout << "Be: 8" << endl; fibonacci.InsertLast(8);
//
//        cout << "\nA lista tartalma: " << endl;
//        fibonacci.PrintOut();
//
//        cout << "\nKeszitsunk egy masolatot a listarol\n";
//        List<int> egeszek = fibonacci;
//        egeszek.PrintOut();
//
//        cout << "\nAz aktualis elem ilyenkor az utolsonak betett elem" << endl;
//        cout << "Act: " << egeszek.GetValue() << endl;
//
//        cout << "\nAllitsuk az aktualis elemet az elso elemre" << endl;
//        egeszek.ToFirst();
//        cout << "Act: " << egeszek.GetValue() << endl;
//
//        cout << "\nLepjunk harmat elore (Harom StepNext utan): " << endl;
//        egeszek.StepNext();
//        egeszek.StepNext();
//        egeszek.StepNext();
//        cout << "Act: " << egeszek.GetValue() << endl;;
//
//        cout << "\nAz aktualis elem torlesre kerul" << endl;
//        egeszek.RemoveAct();
//        cout << "Egyreszt eltunt a szam a listabol: " << endl;
//        egeszek.PrintOut();
//        cout << "Masreszt az aktualis elem a torolt utani lett: " << endl;
//        cout << "Act: " << egeszek.GetValue();
//
//
//        cout << "\n\nIrassuk ki ujra a ket listat:" << endl;
//        egeszek.PrintOut();
//        fibonacci.PrintOut();
//        cout << "\nA ket lista kulonbozo, hisz a masolat fuggetlen az eredetitol" << endl;
//
//        List<string> stringek;
//        cout << "\n\n\n--- Egy \"string\"-eket tartalmazo lista tesztelese ---\n";
//        cout << "Be: Januar" << endl; stringek.InsertFirst("Januar");
//        cout << "Be: Februar" << endl; stringek.InsertFirst("Februar");
//        cout << "Be: Kazuar" << endl; stringek.InsertFirst("Kazuar");
//        cout << "Be: Jaguar" << endl; stringek.InsertFirst("Jaguar");
//
//        cout << "\nA lista tartalma ekkor: " << endl;
//        stringek.PrintOut();
//
//        cout << "\nAz aktualis elem ilyenkor az elso elem" << endl;
//        cout << "Act: " << stringek.GetValue() << endl;
//
//        cout << "\nEgy StepNext utan: " << endl;
//        stringek.StepNext();
//        cout << "Act: " << stringek.GetValue() << endl;;
//
//        cout << "\nHa torlom az aktualis elemet" << endl;
//        stringek.RemoveAct();
//        cout << "Egyreszt eltunik a szoveg a listabol: " << endl;
//        stringek.PrintOut();
//        cout << "Masreszt az aktualis elem a torolt utani elem lesz: " << endl;
//        cout << "Act: " << stringek.GetValue();
//
//    }
//    catch(UnderFlowException& e)
//    {
//        cout << "\n***HIBA tortent!*** " << e.what() << endl;
//    }
//    catch(ActNullException& e)
//    {
//        cout << "\n***HIBA tortent!*** " << e.what() << endl;
//    }
//
//    //Az udvarias program elkˆszˆn
//    cout << "\n\nA program befejezte a futtasat, viszontlatasra!" <<endl;
}
