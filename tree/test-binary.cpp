#include "binary.h"

#include <iostream>

using namespace tree;

template <typename T>
void TraverseCallbackTest(tree::Node<T> *node)
{
  if (node->value) {
    std::cout << node->value << std::endl;
  } else {
    std::cout << "No value here\n";
  }
}

int main () {
  BinaryTree<int> *bt = new BinaryTree<int>;

  // test insert
  bt->Insert(1);
  bt->Insert(3);
  bt->Insert(6);

  // test search
  Node<int>* node = bt->Search(3, bt->root_);
  if (!node) {
    std::cout << "nothing found :(\n";
  } else {
    std::cout << "node found :)\n";
  }

  // test traversal
  // test pre
  std::cout << "Test pre\n";
  bt->Traverse(tree::PRE, bt->root_, &TraverseCallbackTest<int>);
  // test in
  std::cout << "Test in\n";
  bt->Traverse(tree::IN, bt->root_, &TraverseCallbackTest<int>);
  // test post
  std::cout << "Test post\n";
  bt->Traverse(tree::POST, bt->root_, &TraverseCallbackTest<int>);

  // deleting
  std::cout << "Test deleting\n";
  bt->Delete(3);

  // after deleting
  std::cout << "After deleting: \nTraverse in pre order:\n";
  bt->Traverse(tree::PRE, bt->root_, &TraverseCallbackTest<int>);

  return 0;
}
