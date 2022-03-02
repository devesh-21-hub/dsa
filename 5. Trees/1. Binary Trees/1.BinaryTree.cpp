#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createBinaryTree()
{
    Node *newNode = new Node;
    int data;

    cout << "Enter data: \n";
    cin >> data;

    if (data == -1)
        return 0;

    newNode->data = data;

    cout << "Enter left child of " << data << ": \n";
    newNode->left = createBinaryTree();

    cout << "Enter right child of " << data << ": \n";
    newNode->right = createBinaryTree();

    return newNode;
}

void preorder(Node *root)
{
    if (root == 0)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == 0)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == 0)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = 0;
    root = createBinaryTree();

    cout << "Pre-order: ";
    preorder(root);
    cout << "\n";
    cout << "In-order: ";
    inorder(root);
    cout << "\n";
    cout << "Post-order: ";
    postorder(root);
    cout << "\n";

    return 0;
}

// INPUT:
//  9
//  8
//  -1
//  2
//  -1
//  -1
//  12
//  -1
//  -1
//  78
//  23
//  -1
//  -1
//  14
//  -1
//  -1

// OUTPUT:
//  Pre-order: 5 9 8 2 12 78 23 14
//  In-order: 8 2 9 12 5 23 78 14
//  Post-order: 2 8 12 9 23 14 78 5
