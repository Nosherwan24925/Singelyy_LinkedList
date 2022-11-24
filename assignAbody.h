
#pragma once
#include"LinkedList.h"




LinkedList* partAbody(void)
{

	LinkedList* L = new LinkedList;
	int input = 0;
	while (1)
	{
		cout << "------------------------------------------" << endl;
		cout << ">>> 1 : Insert At First Node" << endl;
		cout << ">>> 2 : Insert At End Node" << endl;
		cout << ">>> 3 : Insert After Specific  Element" << endl;
		cout << ">>> 4 : Insert Before Specific  Element" << endl;
		cout << ">>> 5 : Delete First Node" << endl;
		cout << ">>> 6 : Delete End Node" << endl;
		cout << ">>> 7 : Delete Maximum Value Node" << endl;
		cout << ">>> 8 : Delete N  Node" << endl;
		cout << ">>> 9 : Delete All Nodes" << endl;
		cout << ">>> 10 : Delete Node Befroe Specific Element Node" << endl;
		cout << ">>> 11 : Delete Node After Specific Element Node" << endl;
		cout << ">>> 12 : Swap Any Two Nodes Data" << endl;
		cout << ">>> 13 : To Append No of Nodes From Start" << endl;
		cout << ">>> 14 : Sort List In Assending Order" << endl;
		cout << ">>> 15 : Print All Elements in Original Order" << endl;
		cout << ">>> 16 : Print All Elements in Reversed Order" << endl;
		cout << "Other Key To Exit" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> input;

		/////////////////////////////////////////////////////////////////////////////////////////

		if (input == 1)
		{
			int value = 0;
			cout << "Enter Element To Add : ";
			cin >> value;
			L->insertAtBegin(value);
		}

		/////////////////////////////////////////////////////////////////////////////////////////



		else if (input == 2)
		{
			int value = 0;
			cout << "Enter Element To Add : ";
			cin >> value;
			L->insertAtEnd(value);

		}

		/////////////////////////////////////////////////////////////////////////////////////////


		else if (input == 3)
		{
			int value = 0;
			int valueFind = 0;
			cout << "Enter Element To Find in List : ";
			cin >> valueFind;
			cout << "Enter Element To Add : ";
			cin >> value;
			L->insertAfter(valueFind, value);

		}

		/////////////////////////////////////////////////////////////////////////////////////////


		else if (input == 4)
		{
			int value = 0;
			int valueFind = 0;
			cout << "Enter Element To Find in List : ";
			cin >> valueFind;
			cout << "Enter Element To Add : ";
			cin >> value;
			L->insertBefore(valueFind, value);

		}

		/////////////////////////////////////////////////////////////////////////////////////////


		else if (input == 5)
		{
			L->deleteFromStart();
		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 6)
		{
			L->deleteFromEnd();
		}

		/////////////////////////////////////////////////////////////////////////////////////////


		else if (input == 7)
		{
			L->deleteMaximumValue();
		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 8)
		{
			int node = 0;
			cout << "Enter Node No To Delete : ";
			cin >> node;
			L->deleteN(node);
		}

		//////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 9)
		{
			L->DeleteAllList();
		}

		//////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 10)
		{

			int val = 0;
			cout << ">>> Enter Any Number To Delete The Previous Node : ";
			cin >> val;
			L->DeleteBeforeAnyNumber(val);
		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 11)
		{
			int val = 0;
			cout << ">>> Enter Any Number To Delete The Next Node : ";
			cin >> val;
			L->DeleteAfterAnyNumber(val);
		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 12)
		{
			int indOne = 0, indTwo = 0;

			cout << ">>> Enter index One :";
			cin >> indOne;
			cout << ">>> Enter index One :";
			cin >> indTwo;

			L->SwapAnyTwoNode(indOne, indTwo);

		}

		///////////////////////////////////////////////////////////////////////////////////////

		else if (input == 13)
		{
			int nNode = 0;

			cout << ">>> Enter No of Nodes To Append To Start : ";
			cin >> nNode;
			L->AppenNodesTOBeginN(nNode);

		}

		//////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 14)
		{
			L->SortList();

		}

		//////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 15)
		{
			cout << ".................................................................." << endl;
			cout << ">>> List : ";
			L->Display();

			cout << "..................................................................." << endl;

		}

		//////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 16)
		{

			cout << ".................................................................." << endl;
			cout << ">>> Revesed List : ";
			L->DisplayReverse();

			cout << "..................................................................." << endl;
		}

		
		///////////////////////////////////////////////////////////////////////////////////////////////////

		else
		{
			return L;
			break;
		}


	}

	return nullptr;
}