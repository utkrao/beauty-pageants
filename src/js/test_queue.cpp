#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int key; // struct
    Node *left;
    Node *right;
};

Node *createNode(int key)
{
    Node *node = new Node;
    node->key = key; // method
    node->right = NULL;
    node->left = NULL;
    return node;
}

// level order traversal
Node *search(Node *root, int key)
{
    if (root == NULL)
        return NULL;
    queue<Node *> q;
    Node *out = NULL;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp->key = key)
            out = temp;
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    return out;
}

void insert(Node *root, int key)
{
    // asssuming tree is not empty
    Node *nodetoInsert = createNode(key);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // checks left
        if (left == NULL)
        {
            temp->left = nodetoInsert;
            return;
        }
        else
        {
            q.push(temp->left);
        }

        // checks right
        if (left == NULL)
        {
            temp->right = nodetoInsert;
            return;
        }
        else
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->right = createNode(2);
    root->right->left = createNode(2);
    //             1
    //            / \
    //           2   3
    //          /     \
    //         4       5
    // Node* node = search(root,2);
    // cout<< node <<endl;            // not working ask mam
    insert(root, 6);
    //          1
    //         / \
//            2   3
    //       /   / \   
//          4   6   5
    cout << root->key << endl;

    return 0;
}