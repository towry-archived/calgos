// binary.hpp

#pragma once

#include <iostream>

namespace tree {
  template <typename T>
  struct Node {
    T value;
    Node *left;
    Node *right;
  };

  // The tree traversal order
  enum Order {PRE, IN, POST};

  template <typename T>
  struct TraversalCallback {
    typedef void (*type)(Node<T> *);
  };

  template <typename T>
  class BinaryTree {
  public:
    BinaryTree();
    ~BinaryTree();
    void Insert(T);
    Node<T>* Search(T, Node<T>*) const;
    void Delete(T);
    void Traverse(enum Order, Node<T>*, typename TraversalCallback<T>::type);

  public:
    Node<T>* root_;
  };
}
