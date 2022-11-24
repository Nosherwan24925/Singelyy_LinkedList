
#pragma once


#include"LinkedList.h"
#include"assignAbody.h"



void partBbody(void)
{


	
	int input = 0;
		cout << "---------------------------------------------------------------" << endl;
		cout << "---------------------- ASSIGNEMNT PART B ----------------------" << endl;
		cout << "---------------------------------------------------------------" << endl;

		cout << ">>> 1 : Swap Consective Nodes in List" << endl;
		cout << ">>> 2 : Combine The List with Another List" << endl;
		cout << ">>> 3 : Remove Duplicates " << endl;
		cout << ">>> 4 : Take Union Of Two Sets " << endl;
		cout << ">>> 5 : Take Intersection Of Two Sets " << endl;
		cout << ">>> 6 : Add Two Lists " << endl;

		cout << "Other Key To Exit" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> input;

		if (input == 1)
		{
			cout << "------------- First Enter List Information-------------" << endl;
			LinkedList* L1=partAbody();

			cout << "----------------------------------------------------------------" << endl;
			cout << ">>> List Before Swaping Consective List : ";
			L1->Display();
			L1->SwapConsectiveNodes();
			cout << ">>> List After Swaping Consective List  : ";
			L1->Display();
			cout << "----------------------------------------------------------------" << endl;

			delete L1;
			L1 = nullptr;
		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 2)
		{
			

			cout << "------------- Enter List 1 Data------------" << endl;
			LinkedList* L1 = partAbody();
			cout << "------------- Enter List 2 Data------------" << endl;
			LinkedList* L2 = partAbody();

			LinkedList* L3 = L1->CombineTwolLists(L2);


			cout << "..................................................................." << endl;
			cout << ">>> List 1 : ";
			L1->Display();
			cout << ">>> List 2 : ";
			L2->Display();
			cout << ">>> List 3 : ";
			L3->Display();
			cout << "..................................................................." << endl;


			delete L2;
			L2 = nullptr;
			delete L1;
			L1 = nullptr;
			delete L3;
			L3 = nullptr;



		}

		/////////////////////////////////////////////////////////////////////////

		else if (input == 3)
		{

			cout << "------------- Enter List  Data------------" << endl;
			LinkedList* L1 = partAbody();

			cout << "--------------------------------------------------------------------" << endl;
			cout << ">>> List Before Removing Duplicates : ";
			L1->Display();
			cout << ">>> List After Removing Duplicates : ";
			L1->RemoveDuplicates();
			L1->Display();
			cout << "--------------------------------------------------------------------" << endl;

			delete L1;
			L1 = nullptr;
		}

		//////////////////////////////////////////////////////////////////////// 

		else if (input == 4)
		{

			cout << "------------- Enter List 1 Data------------" << endl;
			LinkedList* L1 = partAbody();

			cout << "------------- Enter List 2 Data------------" << endl;
			LinkedList* L2 = partAbody();

			cout << "..................................................................." << endl;
			cout << ">>> List 1 : ";
			L1->Display();
			cout << ">>> List 2 : ";
			L2->Display();
			cout << ">>> Union Of List 1 And List 2  : ";
			LinkedList* L3 = L1->UnionOfTwoLists(L2);
			L3->Display();
			cout << "..................................................................." << endl;


			delete L2;
			L2 = nullptr;
			delete L1;
			L1 = nullptr;
			delete L3;
			L3 = nullptr;



		}

		//////////////////////////////////////////////////////////////////////////////////////

		else if (input == 5)
		{
			cout << "------------- Enter List 1 Data------------" << endl;
			LinkedList* L1 = partAbody();
			cout << "------------- Enter List 2 Data------------" << endl;
			LinkedList* L2 = partAbody();

			cout << "..................................................................." << endl;
			cout << ">>> List 1 : ";
			L1->Display();
			cout << ">>> List 2 : ";
			L2->Display();
			cout << ">>> Intersection Of List 1 And List 2  : ";
			LinkedList* L3 = L1->InterSectionOfTwoLists(L2);
			L3->Display();
			cout << "..................................................................." << endl;

			delete L2;
			L2 = nullptr;
			delete L1;
			L1 = nullptr;
			delete L3;
			L3 = nullptr;

		}

		/////////////////////////////////////////////////////////////////////////////////////////

		else if (input == 6)
		{

			cout << "------------- Enter List 1 Data------------" << endl;
			LinkedList* L1 = partAbody();
			cout << "------------- Enter List 2 Data------------" << endl;
			LinkedList* L2 = partAbody();


			

			cout << "..................................................................." << endl;
			cout << ">>> List 1 : ";
			L1->Display();
			cout << ">>> List 2 : ";
			L2->Display();
			cout << ">>> Addition Of List 1 And List 2  : ";
			LinkedList* L3 = L1->ListAddition(L2);
			L3->Display();
			cout << "..................................................................." << endl;

			delete L2;
			L2 = nullptr;
			delete L1;
			L1 = nullptr;
			delete L3;
			L3 = nullptr;

		}

		///////////////////////////////////////////////////////////////////////////////////////////////////

		



}
