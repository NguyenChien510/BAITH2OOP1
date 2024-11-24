#include "Stack.h"
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout << "Phan tu vua duoc pop la : " <<s.pop()<<endl;
	cout << "So luong phan tu trong stack : " << s.numOfElements() << endl;
	cout << "Danh sach phan tu trong stack : " ;
	s.print();
}
