#include <iostream>
#include <queue>
using namespace std;

class Nyje
{
public:
    int value;
    Nyje *left;
    Nyje *right;
    Nyje *parent;

    Nyje(int val)
    {
        this->value = val;
        this->right = nullptr;
        this->left = nullptr;
        this->parent = nullptr;
    }

    void insert(int value)
    {
        if (value < this->value)
        {
            if (left)
            {
                left->insert(value);
            }
            else
            {
                left = new Nyje(value);
                left->parent = this;
            }
        }
        else
        {
            if (right)
            {
                right->insert(value);
            }
            else
            {
                right = new Nyje(value);
                right->parent = this;
            }
        }
    }

    Nyje *find(int value)
    {

        if (this->value == value)
        {
            return this;
        }

        if (value < this->value)
        {
            if (!this->left)
            {
                return nullptr;
            }

            return this->left->find(value);
        }
        else
        {
            if (!this->right)
            {
                return nullptr;
            }

            return this->right->find(value);
        }

        return nullptr;
    }

    void bft()
    {
        queue<Nyje *> q;

        q.push(this);

        while (!q.empty())
        {
            Nyje *current = q.front();
            q.pop();

            cout << current->value << " ";
            if (current->left)
            {

                q.push(current->left);
            }

            if (current->right)
            {
                q.push(current->right);
            }
        }
    }

    void preOrder()
    {
        cout << this->value << " ";
        if (this->left)
        {
            this->left->preOrder();
        }

        if (this->right)
        {
            this->right->preOrder();
        }
    }

    void inOrder()
    {
        if (this->left)
        {
            this->left->inOrder();
        }

        cout << this->value << " ";

        if (this->right)
        {
            this->right->inOrder();
        }
    }

    void postOrder()
    {
        if (this->left)
        {
            this->left->postOrder();
        }

        if (this->right)
        {
            this->right->postOrder();
        }

        cout << this->value << " ";
    }

    Nyje *max()
    {
        if (this->right == nullptr)
        {
            return this;
        }

        return this->right->max();
    }

    void Delete(int x)
    {
        Nyje *nodeToDelete = this->find(x);

        if (nodeToDelete->left == nullptr && nodeToDelete->right == nullptr)
        {
            Nyje *parent = nodeToDelete->parent;
            bool leftChild = parent->left->value == nodeToDelete->value;

            if (leftChild)
            {
                parent->left = nullptr;
            }
            else
            {
                parent->right = nullptr;
            }

            delete nodeToDelete;
        }
        else if (nodeToDelete->left != nullptr || nodeToDelete->right != nullptr)
        {
            Nyje *nodeToConnect = nodeToDelete->left != nullptr ? nodeToDelete->left : nodeToDelete->right;

            nodeToConnect->parent = nodeToDelete->parent;

            if (nodeToConnect->value < nodeToConnect->parent->value)
            {
                nodeToConnect->parent->left = nodeToConnect;
            }
            else
            {
                nodeToConnect->parent->right = nodeToConnect;
            }

            delete nodeToDelete;
        }
        else
        {
            Nyje *nodeToReplace = nodeToDelete->left->max();

            nodeToDelete->value = nodeToReplace->value;

            nodeToDelete->left->Delete(nodeToReplace->value);
        }
    }
};

int main()
{
    Nyje *root = new Nyje(7);

    root->insert(10);
    root->insert(1);
    root->insert(8);
    root->insert(2);
    root->insert(9);

    root->inOrder();

    return 0;
}

// Node *root = new Node(7);
// Node *ten = new Node(10);
// Node *one = new Node(1);
// Node *eight = new Node(8);

// root->right = ten;
// root->left = one;

// ten->left = eight;