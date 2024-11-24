#include "Stack.h"
Stack::Stack()
	:top(nullptr),size(0)
{
}

Stack::~Stack()
{
	while(!isEmpty()){
		pop();
	}
}



//Dieu kien truoc : Gia tri dua vao phai hop le
//Dieu kien sau : Phan tu duoc them vao NODE TOP va size tang len
void Stack::push(int value)
{
	Node* newnode = new Node(value);
	newnode->setNext(top);
	top = newnode;
	size++;
}


//Dieu kien truoc :Stack khong duoc rong
//Dieu kien sau : Phan tu o tren cung NODE TOP duoc loai bo va giam kich thuoc size
int Stack::pop()
{
	if(isEmpty()) 
	{
		cout << "Stack is Empty!"<<endl;
		return -1;
	}
	Node* temp = top;
	int value = temp->getItem();
	top = top->getNext();
	delete temp;
	size--;
	return value;
}


//Dieu kien truoc : Khong co
//Dieu kien sau : Tra ve TRUE neu stack rong va false khi nguoc lai
bool Stack::isEmpty()
{
	return top == nullptr;
}

//Dieu kien truoc: Khong co
//Dieu kien sau : Tra ve so luong phan tu trong stack
int Stack::numOfElements()
{
	return size;
}

//Dieu kien truoc : Khong co
//Dieu kien sau : Cac phan tu Stack duoc in ra man hinh
void Stack::print()
{
	if(top == NULL){
		cout << "Stack is Empty!"<<endl;
	}
	Node *temp = top;
	while(temp!=nullptr){
		cout << temp->getItem() << " ";
		temp = temp->getNext();
	}
	cout << endl;
}
