#include <iostream>

struct ThreadedBinaryTreeNode {
    int data;
    bool leftThread;
    ThreadedBinaryTreeNode* leftChild;
    bool rightThread;
    ThreadedBinaryTreeNode* rightChild;
};

class ThreadedBinaryTree {
public:
    ThreadedBinaryTree() : root(nullptr) {}

    void insert(int data) {
        ThreadedBinaryTreeNode* newNode = new ThreadedBinaryTreeNode{data, true, nullptr, true, nullptr};

        if (!root) {
            root = newNode;
            return;
        }

        ThreadedBinaryTreeNode* current = root;
        while (true) {
            if (data < current->data) {
                if (!current->leftChild) {
                    current->leftChild = newNode;
                    newNode->rightChild = current;
                    return;
                } else if (current->leftThread) {
                    newNode->rightChild = current;
                    newNode->leftChild = current->leftChild;
                    current->leftThread = false;
                    current->leftChild = newNode;
                    return;
                } else {
                    current = current->leftChild;
                }
            } else if (data > current->data) {
                if (!current->rightChild) {
                    current->rightChild = newNode;
                    newNode->leftChild = current;
                    return;
                } else if (current->rightThread) {
                    newNode->leftChild = current;
                    newNode->rightChild = current->rightChild;
                    current->rightThread = false;
                    current->rightChild = newNode;
                    return;
                } else {
                    current = current->rightChild;
                }
            } else {
                // the data already exists in the tree
                return;
            }
        }
    }

    void inorderTraversal() const {
        ThreadedBinaryTreeNode* current = root;

        // find the leftmost node
        while (current && current->leftChild) {
            current = current->leftChild;
        }

        while (current) {
            std::cout << current->data << ' ';

            if (current->rightThread) {
                current = current->rightChild;
            } else {
                current = current->rightChild;
                while (current && current->leftChild) {
                    current = current->leftChild;
                }
            }
        }

        std::cout << '\n';
    }

private:
    ThreadedBinaryTreeNode* root;
};

int main() {
    ThreadedBinaryTree tree;

    tree.insert(5);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(3);
    tree.insert(6);
    tree.insert(8);

    tree.inorderTraversal(); // Output: 1 2 3 5 6 7 8
    return 0;
}
