
//
// Lab_3:
// The startup code builds a binary tree where elements can be stored.
// The nodes can be displayed with inorder, preorder, and postorder algorithms.
//
// 
// Assignment:
// Using this startup code as a starting point:
// Implement a database program such an address book similar to our phone address book, i.e.:
// 1 - Accept simple entries as name, and phone number
// 2 - Store the address book entries in a form of Binary tree by inserting the entries, you will have to modify the current implementaion to accept strings
// 3 - Adjust the entries and save the new info in the table (and eventually in the file) (simillar to lab_1)
//     Upon exit: Save tree info (will be be already sorted) in the phonebook file  
// 4 - Upon startup, load the stored phone info from the phonebook file
// 5 - Display phone numbers info in a sorted order, limit the entries to few < 10 
// 6 - Verify that you can insert, display, delete and update entries
// 6 - Your implementaion should behave very simillar to your phonebook
// 7 - Upload code along with your run test cases (report) to CANVAS
//


#include "stdafx.h"
#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
using namespace std;



int main()
{

	IntBinaryTree tree;

	// Insert some nodes.
	cout << "Inserting some nodes ...: " << endl;
	cout << endl;
	string arr[8] = {"Ahmed Minhaj", "Jeff Musk","Elon Bezos","Donald Obama","Lionel Ronaldo","Cristiano Messi","Barack Trump","Steve Gates" };
	string num_arr[8] = { "5868434533","3132425623","3132398212","9197456789","3132424319","3141495678","7628794567","3198422636" };
	for (int i = 0; i < 8; i++) { tree.insertNode(arr[i],num_arr[i]); }

	//inserting info into linked list

	cout << "Sorted list: " << endl;
	tree.displayInOrder();
	cout << endl;
	

	cout << "traversing the tree " << endl;
	// Display inorder.
	cout << "Inorder traversal: " << endl;
	tree.displayInOrder();
	cout << endl;
	
	
	
	

	// Display preorder.
	cout << "\nPreorder traversal: " << endl;

	tree.displayPreOrder();

	// Display postorder.
	cout << "\nPostorder traversal: " << endl;
	tree.displayPostOrder();

	cout << "\Barack Trump-Search for some node values: " << endl;
   // Search for the value Barack Trump.
   if (tree.searchNode("Barack Trump"))
      cout << "Barack Trump is found in the tree " << endl;
   else
      cout << "Barack Trump was not found in the tree. " << endl;

   cout << endl;

   // Search for the value Ahmed Wasif.
   if (tree.searchNode("Ahmed Wasif"))
      cout << " Ahmed Wasif is found in the tree " << endl;
   else
      cout << "Ahmed Wasif was not found in the tree " << endl;

   cout << endl;
   // Delete the node with value 8.
   cout << "Deleting Barack Trump ...: " << endl;
   tree.remove("Barack Trump");

   // Delete the node with value 12.
   cout << "Deleting Ahmed Minhaj...: " << endl;
   tree.remove("Ahmed Minhaj");

   cout << endl;
   // Display the stored node values.
   cout << "Now, here are the nodes: " << endl;
   tree.displayInOrder();
  

   

	return 0;


}
