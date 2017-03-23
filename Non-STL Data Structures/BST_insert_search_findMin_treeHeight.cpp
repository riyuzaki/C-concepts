// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

int FindMin(BstNode* root){
	
	if(root == NULL){
		cout << "Error : the tree is empty";
		return -1;
	}
	
	else if(root->left == NULL){
		return root->data;
	}

	return FindMin(root->left);
}

int FindHeight(BstNode* root){
	
	int leftHeight = 0;
	int rightHeight = 0;

	if(root->left != NULL){
		leftHeight = 1 + FindHeight(root->left);
	}

	if(root->right != NULL){
		rightHeight = 1 + FindHeight(root->right);
	}

	if(leftHeight == rightHeight){
		return leftHeight;
	}
	else{
		return (leftHeight > rightHeight) ? leftHeight : rightHeight;
	}
}

int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

		root = Insert(root,34);
	root = Insert(root,5);
	//root = Insert(root,82);
	//root = Insert(root,1);
	// Ask user to enter a number.  
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

	cout << "The minimum element in the tree is: " << FindMin(root)<<"\n";

	cout << "The height of the tree is: " << FindHeight(root)<<"\n";
}