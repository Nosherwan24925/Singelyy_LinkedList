#pragma once
#include<iostream>
using namespace std;
#include"Node.h"

class LinkedList
{
private:
	Node* head;

public:
	LinkedList();
	~LinkedList();
	void insertAtBegin(int);
	void insertAtEnd(int);
	void insertAfter(int, int);
	void insertBefore(int, int);

	void deleteFromStart(void);
	void deleteFromEnd(void);
	void deleteMaximumValue(void);
	void deleteN(int);

	void DeleteAllList(void);
	void DeleteBeforeAnyNumber(int);
	void DeleteAfterAnyNumber(int);

	void Display(void) const;

	void DisplayReverse(void) const;
	void SwapAnyTwoNode(int, int);

	int getNumberOfNodes(void);

	void AppenNodesTOBeginN(int);

	void SortList(void);


	void SwapConsectiveNodes(void);


	void setHead(Node*);

	Node* getHead(void);


	void RemoveDuplicates(void);

	LinkedList* UnionOfTwoLists(LinkedList*);
	LinkedList* InterSectionOfTwoLists(LinkedList*);


	LinkedList* CombineTwolLists(LinkedList*);

	LinkedList* ListAddition(LinkedList*);

};


