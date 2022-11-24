
#include"Node.h"



Node::Node()
{
	next = nullptr;
	data = 0;
}

void Node::setData(int d)
{
	data = d;
}
int Node::getData(void)
{
	return data;
}

void Node::setNext(Node* n)
{
	next = n;
}
Node* Node::getNext(void)
{
	return next;
}


Node::Node(int d, Node* n)
{
	data = d;
	next = n;
}
