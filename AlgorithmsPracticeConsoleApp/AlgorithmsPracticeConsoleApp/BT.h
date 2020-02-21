#pragma once

	struct Node {
		int data;
		Node* right;
		Node* left;
		

		Node(int x);//constructor function
	};
	//function that returns a pointer to a node and takes in a pointer to another node and some data and determines whether to return a new node with the data
	// or set the left or right Node pointer to the node with the data
	Node* insert(Node* node, int data);

	//Checks to see if values are in order or not takes in root node for parameter
	void inorder(Node *root, int value[]);




