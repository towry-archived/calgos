#include <iostream>
#include "../tree/binary.h"
#include "../tree/binary.cpp"

template <typename T>
void TraverseCallbackTest(tree::Node<T> *node)
{
  if (node->value != NULL) {
    std::cout << node->value << std::endl;
  } else {
    std::cout << "No value here\n";
  }
}

namespace sort {
	template <typename T>
	static tree::BinaryTree<T>* createTreeFromArray(T arr[], int len) {
		tree::BinaryTree<T> *tree_ = new tree::BinaryTree<T>();
		for (int i = 0; i < len; i++) {
			tree_->Insert(arr[i]);
		}

		return tree_;
	}

	void heapsort(int arr[], int len) {
		tree::BinaryTree<int> *tree_ = createTreeFromArray<int>(arr, len);
		tree_->Traverse(tree::PRE, tree_->root_, &TraverseCallbackTest<int>);
		delete tree_;
	}
}

// template tree::BinaryTree<int>* sort::createTreeFromArray(int arr[]);
