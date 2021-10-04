// C++ Program to convert a Binary Tree
// to a Circular Doubly Linked List
#include<iostream>
using namespace std;

// To represents a node of a Binary Tree
struct Node
{
	struct Node *left, *right;
	int data;
};

// A function that appends rightList at the end
// of leftList.
Node *concatenate(Node *leftList, Node *rightList)
{
	// If either of the list is empty
	// then return the other list
	if (leftList == NULL)
		return rightList;
	if (rightList == NULL)
		return leftList;

	// Store the last Node of left List
	Node *leftLast = leftList->left;

	// Store the last Node of right List
	Node *rightLast = rightList->left;

	// Connect the last node of Left List
	// with the first Node of the right List
	leftLast->right = rightList;
	rightList->left = leftLast;

	// Left of first node points to
	// the last node in the list
	leftList->left = rightLast;

	// Right of last node refers to the first
	// node of the List
	rightLast->right = leftList;

	return leftList;
}

// Function converts a tree to a circular Linked List
// and then returns the head of the Linked List
Node *bTreeToCList(Node *root)
{
	if (root == NULL)
		return NULL;

	// Recursively convert left and right subtrees
	Node *left = bTreeToCList(root->left);
	Node *right = bTreeToCList(root->right);

	// Make a circular linked list of single node
	// (or root). To do so, make the right and
	// left pointers of this node point to itself
	root->left = root->right = root;

	// Step 1 (concatenate the left list with the list
	//		 with single node, i.e., current node)
	// Step 2 (concatenate the returned list with the
	//		 right List)
	return concatenate(concatenate(left, root), right);
}

// Display Circular Link List
void displayCList(Node *head)
{
	cout << "Circular Linked List is :\n";
	Node *itr = head;
	do
	{
		cout << itr->data <<" ";
		itr = itr->right;
	} while (head!=itr);
	cout << "\n";
}


// Create a new Node and return its address
Node *newNode(int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver Program to test above function
int main()
{
	Node *root = newNode(10);
	root->left = newNode(12);
	root->right = newNode(15);
	root->left->left = newNode(25);
	root->left->right = newNode(30);
	root->right->left = newNode(36);

	Node *head = bTreeToCList(root);
	displayCList(head);

	return 0;
}
