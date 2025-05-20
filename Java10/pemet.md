## 1. Create a Tree in C++

```cpp
class Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
```

- Tree example:

```cpp
Node* root = new Node(10);
root->left = new Node(5);
root->right = new Node(15);
```

## 2. Insert and Find in BST

### Insert

```cpp
Node* insert(Node* root, int val) {
    if (!root) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    return root;
}
```

### Find

```cpp
bool find(Node* root, int val) {
    if (!root) {
        return false;
    }
    if (val == root->data) {
        return true;
    }
    if (val < root->data) {
        return find(root->left, val);
    }

    return find(root->right, val);
}
```

## 3. Breadth-First Search (BFS)

```cpp
void bfs(Node* root) {
    if (!root) return;
    queue<Node*> q;

    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left) {
            q.push(curr->left);
        }

        if (curr->right) {
            q.push(curr->right);
        }
    }
}
```

## 4. Depth-First Search (DFS)

### In-Order (Left → Node → Right)

```cpp
void inOrder(Node* root) {
    if (!root) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
```

### Pre-Order (Node → Left → Right)

```cpp
void preOrder(Node* root) {
    if (!root) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
```

### Post-Order (Left → Right → Node)

```cpp
void postOrder(Node* root) {
    if (!root) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
```

## 5. Sample Main Function

```cpp
int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);

    cout << "In-order: ";
    inOrder(root);
}
```

## 6. Delete node

```cpp
	Node* Max() {
		if (this->right == NULL) {
			return this;
		}

		return this->right->Max();
	}

	void Delete(int d) {
		Node* nodeToDelete = this->Find(d);

		if (nodeToDelete == NULL) {
			return;
		}

		if (nodeToDelete->right == NULL && nodeToDelete->left == NULL) {
			if (d < nodeToDelete->parent->data) {
				nodeToDelete->parent->left = NULL;
			}
			else {
				nodeToDelete->parent->right = NULL;
			}

			delete nodeToDelete;
		}
		else if (nodeToDelete->right == NULL || nodeToDelete->left == NULL) {
			Node* nodeToConnect = nodeToDelete->right == NULL ? nodeToDelete->left : nodeToDelete->right;

			nodeToConnect->parent = nodeToDelete->parent;

			if (nodeToDelete->parent == NULL) {
				return;
			}
			else if (d < nodeToDelete->parent->data) {
				nodeToDelete->parent->left = nodeToConnect;
			}
			else {
				nodeToDelete->parent->right = nodeToConnect;
			}

			delete nodeToDelete;
		}
		else {
			Node* nodeToReplace = nodeToDelete->left->Max();

			nodeToDelete->data = nodeToReplace->data;

			nodeToDelete->left->Delete(nodeToReplace->data);
		}
	}
```
