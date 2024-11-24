#include "Node.h"
Node::Node(int value,Node* nextNode)
	:item(value),next(nextNode)
{
}

int Node::getItem()
{
	return item;
}

void Node::setItem(int value)
{
	item = value;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nextNode)
{
	next = nextNode;
}
