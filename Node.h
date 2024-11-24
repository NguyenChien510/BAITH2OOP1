#include<iostream>
using namespace std;
class Node{
	private:
		int item;
		Node* next;
	public:
		Node(int =0,Node* =nullptr);
		int getItem();
		void setItem(int);
		Node* getNext();
		void setNext(Node*);
};
