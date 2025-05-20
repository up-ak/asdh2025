#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node *parent;

    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }

    void insert(int x)
    {
        if (x < this->value)
        {
            if (this->left == nullptr)
            {
                this->left = new Node(x);

                this->left->parent = this;
                return;
            }

            this->left->insert(x);
        }
        else
        {
            if (this->right == nullptr)
            {
                this->right = new Node(x);
                this->right->parent = this;
                return;
            }

            this->right->insert(x);
        }
    }

    Node *find(int x)
    {
        if (this->value == x)
        {
            return this;
        }

        if (x < this->value)
        {
            if (!this->left)
            {
                return nullptr;
            }

            return this->left->find(x);
        }
        else
        {
            if (!this->right)
            {
                return nullptr;
            }

            return this->right->find(x);
        }
    }

    Node *max()
    {
        if (this->right == nullptr)
        {
            return this;
        }

        return this->right->max();
    }

    void Delete(int x)
    {
        Node *nodeToDelete = this->find(x);

        if (!nodeToDelete)
        {
            cout << "Node not found" << endl;
            return;
        }

        if (nodeToDelete->left == nullptr && nodeToDelete->right == nullptr)
        {
            if (nodeToDelete->value < nodeToDelete->parent->value)
            {
                nodeToDelete->parent->left = nullptr;
            }
            else
            {
                nodeToDelete->parent->right = nullptr;
            }

            delete nodeToDelete;
        }
        else if (nodeToDelete->left == nullptr || nodeToDelete->right == nullptr)
        {
            Node *nodeToConnect = nodeToDelete->left == nullptr ? nodeToDelete->right : nodeToDelete->left;

            nodeToConnect->parent = nodeToDelete->parent;

            if (nodeToConnect->value < nodeToConnect->parent->value)
            {
                nodeToConnect->parent->left = nodeToConnect;
            }
            else
            {
                nodeToConnect->parent->right = nodeToConnect;
            }
        }
        else
        {
            Node *nodeToReplace = nodeToDelete->left->max();

            int newValue = nodeToReplace->value;

            nodeToDelete->left->Delete(nodeToReplace->value);

            nodeToDelete->value = newValue;
        }
    }
};

int main()
{
    Node *root = new Node(7);

    root->insert(5);
    root->insert(9);
    root->insert(6);

    cout << root->max()->value;

    return 0;
}