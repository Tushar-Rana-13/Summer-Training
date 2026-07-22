#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsubtree = height(root->left);
    int rightsubtree = height(root->right);
    return 1 + max(leftsubtree, rightsubtree);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }   
    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(25);
    root->left->left = new Node(5);
    root->left->right = new Node(13);
    root->right->left = new Node(22);
    root->right->right = new Node(27);

    cout << count(root) << endl;
    cout << height(root) << endl;

    return 0;
}