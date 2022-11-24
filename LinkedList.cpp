
#include"LinkedList.h"





LinkedList::LinkedList()
{
	head = nullptr;
	
}

LinkedList::~LinkedList()
{

	Node* temp = head;

	while (head != nullptr)
	{
		deleteFromStart();
	}

}
void LinkedList::insertAtBegin(int value)
{
	if (head == nullptr)
	{
		head = new Node(value,nullptr);
	}
	else
	{

		Node* newNode = new Node(value, head);
		head = newNode;
		
	}
}
void LinkedList::insertAtEnd(int value)
{
	if (head == nullptr)
	{
		head = new Node(value,nullptr);
	}
	else
	{
		Node* current = head;


		while (current->getNext() != nullptr)
		{
			current=current->getNext();
		}

		Node* newNode = new Node(value,nullptr);
		current->setNext(newNode);

	}
}
void LinkedList::insertAfter(int valueFind, int value)
{
	if (head != nullptr)
	{
		bool finded = false;
		Node* temp = head;
		while (temp != nullptr)
		{
			if (temp->getData() == valueFind)
			{
				finded = true;
				break;
			}
			temp = temp->getNext();
		}

		if (finded == true)
		{
			if (temp->getNext() != nullptr)
			{
				Node* tempTwo = temp->getNext();
				Node* newNode = new Node(value, tempTwo);
				temp->setNext(newNode);


			}
			else
			{

				Node* newNode = new Node(value, nullptr);
				temp->setNext(newNode);

			}

			cout << ">>> New Node is Added After the Node Number Entered" << endl;
		}
		else
		{
			cerr << ">>> The Element is Not Found in Linked List !!!" << endl;
		}
	}
	else
		cerr << ">>> The List is Empty" << endl;
}
void LinkedList::insertBefore(int valueFind, int value)
{
	if (head != nullptr)
	{
		Node* temp = head;

		if (temp->getData() == valueFind)
		{
			Node* newNode = new Node(value, temp);
			head = newNode;

			cout << ">>> New Node is Added Before the Node Number Entered" << endl;


		}
		else
		{

			Node* tempTwo = nullptr;
			bool finded = false;
			while (temp != nullptr)
			{

				if (temp->getData() == valueFind)
				{
					finded = true;
					break;
				}

				tempTwo = temp;
				temp = temp->getNext();
			}

			if (finded == true)
			{
				Node* newNode = new Node(value, temp);
				tempTwo->setNext(newNode);

				cout << ">>> New Node is Added Before the Node Number Entered" << endl;
			}
			else
			{
				cerr << "The Element is not found in list !!!" << endl;
			}




		}
	}
	else
		cerr << ">>> The List is Empty" << endl;
}

void LinkedList::deleteFromStart(void)
{
	if (head == nullptr)
	{
		cerr << ">>> The List is Already Empty" << endl;
	}
	else
	{
		
			Node* temp = head->getNext();
			delete head;
			head = temp;

			//cout << ">>> First Node is Deleted" << endl;
		
	}
}
void LinkedList::deleteFromEnd(void)
{

	if (head == nullptr)
	{
		cerr << ">>> The List is Already Empty" << endl;
	}
	else
	{
		if (head->getNext() == nullptr)
		{
			delete head;
			head = nullptr;
	

		}
		else
		{
			Node* temp = head;
			Node* tempTwo=nullptr;
			while (temp->getNext()!=nullptr)
			{
				tempTwo = temp;
				temp = temp->getNext();
			}
			delete temp;

			tempTwo->setNext(nullptr);


			
			
		}
		cout << ">>> The End Node is Deleted" << endl;

	}
}
void LinkedList::deleteMaximumValue(void)
{

	int count = 0;
	int indexMax = 0;
	int maxValue = 0;
	if (head != nullptr)
	{
		Node* NodeMax = head;
		maxValue = head->getData();

		Node* current = head;

		while (current != nullptr)
		{


			if (current->getData() > maxValue)
			{
				maxValue = current->getData();
				indexMax = count;
				NodeMax = current;
			}

			count++;
			current = current->getNext();

		}


		if (indexMax == 0)
		{
			Node* temp = head->getNext();
			delete head;
			head = temp;
		}
		else
		{
			Node* NodeBeforeMax = head;
			for (int i = 0; i < indexMax - 1; i++)
			{
				NodeBeforeMax = NodeBeforeMax->getNext();
			}

			NodeBeforeMax->setNext(NodeMax->getNext());
			delete NodeMax;
			NodeMax = nullptr;

		}
		cout << ">>> The Maximum Number is Deleted" << endl;
	}
	else
		cerr << ">>> The List is Already Empty" << endl;


}
void LinkedList::deleteN(int nod)
{
	if (head == nullptr)
	{
		cerr << "List is Already Empty!!!" << endl;
	}
	else
	{


		int count = 0;
		if (head != nullptr && count == nod)
		{
			Node* temp = head->getNext();

			delete head;
			head = temp;

			cout << ">>> The Node " << count << " is Deleted" << endl;
		}
		else
		{

			Node* NodeAtindex = head;

			while (NodeAtindex != nullptr)
			{

				if (count == nod)
				{
					break;
				}
				count++;
				NodeAtindex = NodeAtindex->getNext();

			}


			if (NodeAtindex != nullptr)
			{
				Node* NodeBeforeIndex = head;
				for (int i = 0; i < count - 1; i++)
				{

					NodeBeforeIndex = NodeBeforeIndex->getNext();
				}




				NodeBeforeIndex->setNext(NodeAtindex->getNext());
				delete NodeAtindex;
				NodeAtindex = nullptr;

				cout << ">>> The Node " << count << " is Deleted" << endl;


			}
			else
			{
				cerr << ">>> The Node Number Is Not Existed" << endl;
			}

		}
	}

}

void LinkedList::DeleteAllList(void)
{
	if (head == nullptr)
	{
		cerr << ">>> The List is Already Empty!!!" << endl;
	}
	else
	{

		Node* temp = head;

		while (head != nullptr)
		{
			deleteFromStart();
		}

		//cout << ">>> The Whole List is Deleted" << endl;
	}

}

void LinkedList::Display(void) const
{
	if (head == nullptr)
	{
		cout << ">>> The List is Empty" << endl;
	}
	else
	{
		Node* current = head;

		while (current != nullptr)
		{
			cout << current->getData() << " ";
			current = current->getNext();
		}
	}
	cout << endl;
}


void LinkedList::DisplayReverse(void) const
{

	if (head == nullptr)
	{
		cout << ">>> The List is Empty" << endl;
	}
	else
	{


		LinkedList rl;

		
		Node* temp = head;

		while (temp != nullptr)
		{
			rl.insertAtBegin(temp->getData());

			temp = temp->getNext();
		}

		rl.Display();
		rl.DeleteAllList();





	}
	cout << endl;
	


}
void LinkedList::SwapAnyTwoNode(int nodeOne, int nodeTwo)
{
	if (head == nullptr)
		cerr << ">>> The List is Empty" << endl;
	else
	{
		Node* tempOne = nullptr;
		Node* tempTwo = nullptr;
		bool findOne = false;
		bool findTwo = false;

		Node* temp = head;
		int count = 1;
		while (temp != nullptr)
		{

			if (nodeOne == count)
			{
				tempOne = temp;
				findOne = true;
			}
			else if (nodeTwo == count)
			{
				tempTwo = temp;
				findTwo = true;
			}

			count++;
			temp = temp->getNext();
		}

		if (findOne == true && findTwo == true)
		{
			int tempValue = tempOne->getData();

			tempOne->setData(tempTwo->getData());
			tempTwo->setData(tempValue);

			cout << ">>> The Node Data is Swaped" << endl;
		}
		else
		{
			cerr << ">>> Either One Of the Node is Not Found or Both" << endl;

		}

	}
}


void LinkedList::DeleteBeforeAnyNumber(int valueFind)
{
	if (head != nullptr)
	{
		Node* currentNode = head;
		if (currentNode->getData() == valueFind)
		{
			cout << ">>> There is No Node Before The Value Node" << endl;
		}
		else
		{

			Node* prevNode = nullptr;
			Node* prevprevNode = nullptr;
			bool flag = false;

			while (currentNode != nullptr)
			{


				if (currentNode->getData() == valueFind)
				{
					flag = true;
					break;
				}
				prevprevNode = prevNode;
				prevNode = currentNode;
				currentNode = currentNode->getNext();
			}


			if (flag == false)
				cerr << ">>> The Element is Not Found in List" << endl;
			else
			{
				if (prevprevNode == nullptr)
				{
					delete prevNode;
					head = currentNode;
				}
				else
				{
					delete prevNode;
					prevprevNode->setNext(currentNode);
				}
			}

		}
	}
	else
		cerr << ">>> The List Is Empty" << endl;
}
void LinkedList::DeleteAfterAnyNumber(int valueFind)
{
	if (head != nullptr)
	{
		bool finded = false;
		Node* temp = head;
		while (temp != nullptr)
		{
			if (temp->getData() == valueFind)
			{
				finded = true;
				break;
			}
			temp = temp->getNext();
		}

		if (finded == true)
		{
			Node* tempTwo = temp->getNext();

			if (tempTwo == nullptr)
			{
				cerr << ">>> There is No Node To Delete" << endl;
			}
			else
			{
				Node* tempThree = tempTwo->getNext();
				delete tempTwo;
				temp->setNext(tempThree);
			}

		}
		else
		{
			cerr << ">>> The Element is Not Found in Linked List !!!" << endl;
		}
	}
}


int LinkedList::getNumberOfNodes(void)
{
	int count = 0;

	Node* currentNode = head;

	while (currentNode != nullptr)
	{
		count++;
		currentNode = currentNode->getNext();
	}

	return count;

}



void LinkedList::AppenNodesTOBeginN(int nNode)
{
	if (head == nullptr)
		cerr << ">>> The List Is Empty" << endl;
	else
	{
		int TotalNodes = getNumberOfNodes();

		if (nNode > TotalNodes || nNode<1)
			cerr << ">>> No of Nodes  Want To Append is Exceeded From Total Nodes Or Negative Entry" << endl;
		else if(nNode==TotalNodes){}
		else
		{

			Node* tail = nullptr;
			Node* temp = nullptr;
			Node* secondLastNode = nullptr;
			for (int ind = 1; ind <= nNode; ind++)
			{
				secondLastNode = nullptr;
				tail = head;
				while (tail->getNext() != nullptr)
				{
					secondLastNode = tail;
					tail = tail->getNext();
				}
				
				temp = head;
				Node* newNode = new Node(tail->getData(), temp);
				delete tail;
				tail = nullptr;
				secondLastNode->setNext(nullptr);
				head = newNode;
			}



			

		}
	}
}


void LinkedList::SortList(void)
{
	if (head == nullptr)
		cerr << ">>> The List is Empty" << endl;
	else
	{


		int TotalNodes = getNumberOfNodes();

		if (TotalNodes == 1)
			cout << ">>> There is Only One Node" << endl;
		else
		{

			Node* temp = nullptr;
			int maxValue = 0;
			int nextValue = 0;
			for (int i = TotalNodes - 1; i >= 1; i--)
			{

				temp = head;
				for (int j = 1; j <= i; j++)
				{

					maxValue = temp->getData();
					nextValue = temp->getNext()->getData();
					if (maxValue > nextValue)
					{
						temp->setData(nextValue);
						temp->getNext()->setData(maxValue);

					}
					temp = temp->getNext();



				}
			}
		}
		

	}

}



void LinkedList::SwapConsectiveNodes(void)
{

	if (head == nullptr)
		cout << ">>> The List is Empty" << endl;
	else
	{
		
		Node* currentNode = head;
		int tempStore = 0;
		int key = 1;
		while (currentNode->getNext() != nullptr)
		{

			if (key % 2 != 0)
			{
				tempStore = currentNode->getData();
				currentNode->setData(currentNode->getNext()->getData());
				currentNode->getNext()->setData(tempStore);

			}

			key++;
			currentNode = currentNode->getNext();
		}
	}



}


void LinkedList::setHead(Node* h)
{
	head = h;
}
Node* LinkedList::getHead(void)
{
	return head;
}


void LinkedList::RemoveDuplicates(void)
{


	if (head == nullptr)
		cerr << ">>> The List is Empty" << endl;
	else
	{
		SortList();
		Node* nodeCurrent = head;
		Node* nextNode = nullptr;
		while (nodeCurrent->getNext() != nullptr)
		{

			nextNode = nodeCurrent->getNext();
			if (nodeCurrent->getData() == nextNode->getData())
			{
				nodeCurrent->setNext(nextNode->getNext());
				delete nextNode;
			}
			else
				nodeCurrent = nodeCurrent->getNext();


		}
	}

}

LinkedList* LinkedList::UnionOfTwoLists(LinkedList* L2)
{
	
	RemoveDuplicates();
	L2->RemoveDuplicates();

	LinkedList* L3 = new LinkedList;

	
	Node* temp = head;
	while (temp != nullptr)
	{
		L3->insertAtEnd(temp->getData());
		temp = temp->getNext();
	}
	
	temp= L2->getHead();
	while (temp != nullptr)
	{
		L3->insertAtEnd(temp->getData());
		temp = temp->getNext();
	}

	temp = L3->getHead();
	while (temp != nullptr)
	{
		temp = temp->getNext();
	}

	L3->RemoveDuplicates();

	return L3;


}


LinkedList* LinkedList::InterSectionOfTwoLists(LinkedList* L2)
{

	RemoveDuplicates();
	L2->RemoveDuplicates();

	LinkedList* L3 = new LinkedList;


	Node* temp = head;
	
	Node* tempTwo = nullptr;

	while (temp != nullptr)
	{
		tempTwo = L2->getHead();
		while (tempTwo != nullptr)
		{

			if (temp->getData() == tempTwo->getData())
			{
				L3->insertAtEnd(temp->getData());
			}

			tempTwo = tempTwo->getNext();
		}


		temp = temp->getNext();
	}

	return L3;
}


LinkedList* LinkedList::CombineTwolLists(LinkedList* L2)
{
	int Total_No_Of_Nodes_L1 = getNumberOfNodes();
	int Total_No_Of_Nodes_L2 = L2->getNumberOfNodes();
	int Total_Nodes = Total_No_Of_Nodes_L1 + Total_No_Of_Nodes_L2;


	LinkedList* L3 = new LinkedList();

	Node* listOneNode = getHead();
	Node* listTwoNode = L2->getHead();


	for (int i = 1; i <= Total_Nodes; i++)
	{

		if (i <= Total_No_Of_Nodes_L1)
		{
			L3->insertAtEnd(listOneNode->getData());
			listOneNode = listOneNode->getNext();

		}
		if (i <= Total_No_Of_Nodes_L2)
		{
			L3->insertAtEnd(listTwoNode->getData());
			listTwoNode = listTwoNode->getNext();

		}
	}

	return L3;
}


LinkedList*  LinkedList::ListAddition(LinkedList* L2)
{
	int L1_Total_Nodes = getNumberOfNodes();
	int L2_Total_Nodes = L2->getNumberOfNodes();


	LinkedList* L3 = new LinkedList();

	Node* Node_L1_temp = nullptr;
	Node* Node_L2_temp = nullptr;
	int temp = 0;
	
	int valueOne = 0;
	int valueTwo = 0;



		int control_L1 = L1_Total_Nodes;
		int control_L2 = L2_Total_Nodes;
		temp = 0;
		

		int i = 1;
		while (1)
		{
			valueOne = 0;
			valueTwo = 0;


			if (i <= L1_Total_Nodes)
			{
				Node_L1_temp = head;
				for (int k = 1; k < control_L1; k++)
				{
					Node_L1_temp = Node_L1_temp->getNext();
				}

				
				valueOne = Node_L1_temp->getData();

				control_L1--;
			}

			if (i <= L2_Total_Nodes)
			{
				Node_L2_temp = L2->getHead();
				for (int k = 1; k < control_L2; k++)
				{
					Node_L2_temp = Node_L2_temp->getNext();
				}
				valueTwo = Node_L2_temp->getData();
				control_L2--;
			}


			temp = valueOne + valueTwo + temp;

			if (i == L1_Total_Nodes && i == L2_Total_Nodes)
			{
				if (temp > 9)
				{
					L3->insertAtBegin(temp % 10);
					L3->insertAtBegin(temp /10);
					temp = 0;

				}
				else
				{
					L3->insertAtBegin(temp);
					temp = 0;

				}
			}
			else
			{
				if (temp > 9)
				{
					L3->insertAtBegin(temp % 10);
					temp = temp / 10;
				}
				else
				{
					L3->insertAtBegin(temp);
					temp = 0;

				}
			}
			///////////////////////////////////////////////////////////
			if (L1_Total_Nodes > L2_Total_Nodes)
			{
				if (i == L1_Total_Nodes)
				{
					if (temp!=0)
					{
						L3->insertAtBegin(temp);

					}
					break;
				}
			}
			else
			{
				if (i == L2_Total_Nodes)
				{
					if (temp!=0)
					{
						L3->insertAtBegin(temp);

					}
					break;
				}
			}


			i++;

		}


	
	return L3;
}