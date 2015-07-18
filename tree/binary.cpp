// Copyright (c) 2015 Towry Wang 
// All rights reserved.

#include "binary.h"

#include <iostream>

namespace tree {
  template <typename T>
  void insert (T key, Node<T>*& node) {
    if (node == NULL) {
      node = new Node<T>;
      node->left = NULL;
      node->right = NULL;
      node->value = key;
    } else if (key < node->value) {
      insert(key, node->left);
    } else {
      insert(key, node->right);
    }
  }

  template <typename T>
  BinaryTree<T>::BinaryTree () : root_(nullptr) {}

  template <typename T>
  BinaryTree<T>::~BinaryTree () {
    delete root_;
    root_ = NULL;
  }

  template <typename T>
  void BinaryTree<T>::Insert (T key) {
    if (!root_) {
      root_ = new Node<T>;
      root_->left = NULL;
      root_->right = NULL;

      root_->value = key;
    } else if (key < root_->value) {
      insert<T>(key, root_->left);
    } else {
      insert<T>(key, root_->right);
    }
  }

  template <typename T>
  Node<T>* BinaryTree<T>::Search (T key, Node<T> *node) const {
    if (!node) {
      return nullptr;
    }

    if (key == node->value) {
      return node;
    }

    if (key >= node->value) {
      return Search(key, node->right);
    } else {
      return Search(key, node->left);
    }

    return nullptr;
  }

  // Delete node from tree.
  // First find the inorder successor in the search binary tree,
  // about inorder successor, it's the next node of input node in
  // inorder traverse.
  //       A
  //     /   \
  //    B     C
  // The inorder traverse is B -> A -> C
  // so the A's inorder successor is C, and by the way, A's predecessor
  // is B.
  template <typename T>
  void BinaryTree<T>::Delete (T key) {
    if (!root_) {
      return;
    }

    DeleteNodeFromTree(this, key, root_);
  }

  // Traversal
  template <typename T>
  void BinaryTree<T>::Traverse(enum Order order, Node<T> *node, typename TraversalCallback<T>::type cb) {
    if (!node) {
      return;
    }

    // pre traversal
    if (order == PRE) {
      // root, left, right
      if (cb != NULL) {
        (*cb)(node);
      }
      // recursively traverse left and right
      Traverse(order, node->left, cb);
      Traverse(order, node->right, cb);
    } 

    // in traversal
    else if (order == IN) {
      // recursively traverse node and right
      Traverse(order, node->left, cb);
      if (cb != NULL) {
        (*cb)(node);
      }
      Traverse(order, node->right, cb);
    }

    // post order traversal
    else if (order == POST) {
      // recursively traverse left and right
      Traverse(order, node->left, cb);
      Traverse(order, node->right, cb);
      if (cb != NULL) {
        (*cb)(node);
      }
    }

    // unknow
    else {
      return;
    }
  }

  template <typename T>
  void DeleteNodeFromTree (BinaryTree<T> *tree, T key, Node<T> *&node)
  {
    if (!node) {
      return;
    }

    // Found the node to be deleted.
    if (key == node->value) {
      if (!node->left && !node->right) {
        delete node;
        node = NULL;
      } else if (!node->left && node->right) {
        node->value = node->right->value;
        DeleteNodeFromTree(tree, key, node->right);
      } else {
        node->value = node->left->value;
        DeleteNodeFromTree(tree, key, node->left);
      }
    }

    // Since the key is less than the node's value,
    // that's mean the node that hold the key is left sub-node of node.
    if (key < node->value) {
      DeleteNodeFromTree(tree, key, node->left);
    } else {
      DeleteNodeFromTree(tree, key, node->right);
    }

  }
}

// Explicit instantiations
template class tree::BinaryTree<int>;
