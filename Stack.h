#include<iostream>
#include "Node.h"
using namespace std;
class Stack{
	private:
		Node* top;
		int size;
	public:
		Stack();
		~Stack();
		void push(int);
		int pop();
		bool isEmpty();
		int numOfElements();
		void print();
};
