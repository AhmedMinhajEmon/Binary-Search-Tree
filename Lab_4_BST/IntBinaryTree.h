
// Specification file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include<string>
#include<string.h>
using namespace std;
class IntBinaryTree
{
private:
   struct TreeNode
   {
      int value;     // The value in the node
      string record;
      string name;
      TreeNode *left;    // Pointer to left child node
      TreeNode *right;   // Pointer to right child node
   };

   TreeNode *root;       // Pointer to the root node
   
   // Private member functions
   void insert(TreeNode *&,TreeNode *&);
   void destroySubTree(TreeNode *);
   void deleteNode(string, TreeNode *&);
   void makeDeletion(TreeNode *&);
   void displayInOrder(TreeNode *) const;
   void displayPreOrder(TreeNode *) const;
   void displayPostOrder(TreeNode *) const;
   
   
public:
   // Constructor
   IntBinaryTree()
      { root = nullptr; }
      
   // Destructor
   ~IntBinaryTree()
      { destroySubTree(root); }
      
   // Binary tree operations
   void insertNode(string,string);
   bool searchNode(string );
   void remove(string);
   
   void displayInOrder() const
      {  displayInOrder(root); }
      
   void displayPreOrder() const
      {  displayPreOrder(root); }
      
   void displayPostOrder() const
      {  displayPostOrder(root); }
  
};
#endif