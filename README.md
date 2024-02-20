# Binary Search Tree Program

**Data Structure:**  Binary Search Tree <BR>
**Programming Focus:** C++ class development (inheritance)

## Overview

Welcome to the Binary Search Tree Program! This C++ program implements a binary search tree using the provided `binarysearchtree.h` and `btree.h` files. The main program, `bst.cc`, generates a set of random integers, inserts them into the binary search tree, and repeatedly removes leaves until the tree becomes empty. This project is part of the Fall 2023 CSCI 340 - PE1 Data Struct Algorithm Analysis course and was completed by Jose Barron.

## Features

- **Binary Search Tree Implementation:**
  - Utilizes the `BinarySearchTree` class, derived from the `BinaryTree` class, to implement a binary search tree.
  - Supports insertion, search, and removal of nodes.

- **Random Integer Generation:**
  - Generates a set of random integers within a given range.
  - Inserts the generated integers into the binary search tree.

- **Leaf Removal:**
  - Repeatedly removes leaves from the binary search tree until the tree becomes empty.

## Test Runs

The program has undergone testing to verify its correct functionality and performance. The test case involves generating random integers, inserting them into the binary search tree, and removing leaves until the tree is empty.

1. **Random Integer Insertion:**
   - Generates a set of random integers.
   - Inserts the integers into the binary search tree.

2. **Leaf Removal:**
   - Repeatedly removes leaves from the binary search tree until it becomes empty.
   - Displays the contents of the binary search tree after each removal.

## Code Organization

All the code for this project is located in the accompanying files:

- `bst.h` (given): Header file defining the `BinarySearchTree` class and its member functions.
- `btree.h`: Header file defining the `BinaryTree` class and its member functions.
- `binarysearchtree.h`: Header file with the template class definition for the `BinarySearchTree`.
- `bst.cc` (given): Main program file where random integers are generated, inserted into the binary search tree, and leaves are removed.
- `node.h`(given): Header file defining the `Node` class, which represents a node in the binary tree.

## Skills Showcase

This project demonstrates proficiency in several key areas:

- **C++ Programming:**
  - Implements a binary search tree using classes and templates.
  - Utilizes inheritance and polymorphism with the `BinaryTree` and `BinarySearchTree` classes.

- **Algorithmic Analysis:**
  - Implements algorithms for inserting, searching, and removing nodes in a binary search tree.
  - Analyzes the performance of the program as leaves are repeatedly removed.

- **Testing and Debugging:**
  - Conducts testing to ensure the correctness of the binary search tree implementation.
  - Handles scenarios where leaves are removed until the tree becomes empty.

- **Code Organization:**
  - Structured code into separate header and implementation files (`bst.h`, `btree.h`, `binarysearchtree.h`, `bst.cc`, `node.h`).
  - Utilizes header files for forward declarations and macro definitions.

