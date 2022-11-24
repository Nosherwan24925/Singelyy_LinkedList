
#pragma once


class Node
{
private:
	int data;
	Node* next;
public:
	Node();
	Node(int,Node*);

	void setData(int);
	int getData(void);

	void setNext(Node*);
	Node* getNext(void);



};