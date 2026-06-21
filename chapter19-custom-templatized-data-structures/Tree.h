// Fig. 19.22: Tree.h
// Tree class-template definition.
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "TreeNode.h"

// Tree class-template definition
template<typename NODETYPE> class Tree {
public:
	// insert node in Tree
	void insertNode(const NODETYPE& value) {
		insertNodeHelper(, value);
	}

	// begin preorder traversal of Tree
	void preOrderTraversal() const {
		preOrderHelper(rootPtr);
	}

	// begin inorder traversal of Tree
	void inOrderTraversal() const {
		inOrderHelper(rootPtr);
	}

	// begin postorder traversal of Tree
	void postOrderTraversal() const {
		postOrderHelper(rootPtr);
	}

private:
	TreeNode<NODETYPE>* rootPtr{ nullptr };

	// utility function called by insertNode; receives a pointer
	// to a pointer so that the function can modify pointer's value
	void insertNodeHelper(
		TreeNode<NODETYPE>** ptr, const NODETYPE& value) {
		// subtree is empty; create new TreeNode containing value
		if (== nullptr) {
			new TreeNode<NODETYPE>(value);
		}
		else { // subtree is not empty
			// data to insert is less than data in current node
			if (value < ()->data) {
				insertNodeHelper(&(()->leftPtr), value);
			}
			else {
				// data to insert is greater than data in current node
				if (value > ()->data) {
					insertNodeHelper(&(()->rightPtr), value);
				}
				else { // duplicate data value ignored
					cout << value << " dup" << endl;
				}
			}
		}
	}

	// utility function to perform preorder traversal of Tree
	void preOrderHelper(TreeNode<NODETYPE>* ptr) const {
		if (ptr != nullptr) {
			cout << ptr->data << ' '; // process node
			preOrderHelper(ptr->leftPtr); // traverse left subtree
			preOrderHelper(ptr->rightPtr); // traverse right subtree
		}
	}

	// utility function to perform inorder traversal of Tree
	void(TreeNode<NODETYPE>* ptr) const {
		if (ptr != nullptr) {
			inOrderHelper(ptr->leftPtr); // traverse left subtree
			cout << ptr->data << ' '; // process node
			inOrderHelper(ptr->rightPtr); // traverse right subtree
		}
	}

	// utility function to perform postorder traversal of Tree
	void(TreeNode<NODETYPE>* ptr) const {
		if (ptr != nullptr) {
			postOrderHelper(ptr->leftPtr); // traverse left subtree
			postOrderHelper(ptr->rightPtr); // traverse right subtree
			cout << ptr->data << ' '; // process node
		}
	}
};

#endif