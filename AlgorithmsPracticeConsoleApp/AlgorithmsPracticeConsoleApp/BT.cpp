#include "BT.h"
#include <stdio.h>
#include<iostream>
using namespace std;
Node::Node(int x)
{
	data = x;
	right = NULL;
	left = NULL;
}

Node* insert(Node* node, int data)
{
	if (node == NULL) {
		return new Node(data);
	}
	else if (data == node->data) {}

	else if (data < node->data) {
		node->left = insert(node->left, data);
	}
	else { node->right = insert(node->right, data); }
	return node;
}

//Checks to see if values are in order or not takes in root node for parameter
int i = 0;
void inorder(Node *root,  int value[])
{
	
	if (root == NULL) { return; }
	inorder(root->left, value);
	cout << root->data << " ";
	value[i] = root->data;
	if (i > 0 && value[i - 1] > value[i])
	{
		cout << "Somehow we got out of order here";
	}
	i++;
	inorder(root->right, value);
}