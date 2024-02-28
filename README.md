# Binary Trees Project

## Description

This project focuses on implementing various operations and algorithms related to binary trees in C programming language. It covers topics such as creating binary trees, insertion and deletion of nodes, traversal methods, calculating tree properties like depth, height, size, and checking properties like completeness, fullness, and balance.

## Learning Objectives

By completing this project, you are expected to be able to:

- Explain what a binary tree is and its basic properties.
- Differentiate between a binary tree and a Binary Search Tree (BST).
- Understand the possible gain in terms of time complexity compared to linked lists when using binary trees.
- Define the concepts of depth, height, and size of a binary tree.
- Describe different traversal methods to go through a binary tree.
- Identify the characteristics of complete, full, perfect, and balanced binary trees.

## Project Requirements

### General

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No more than 5 functions per file
- The prototypes of all functions should be included in a header file called `binary_trees.h`
- Don’t forget to push your header file
- All header files should be include guarded

## Data Structures

Please use the following data structures and types for binary trees:

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Binary Search Tree
typedef struct binary_tree_s bst_t;

AVL Tree
typedef struct binary_tree_s avl_t;

Max Binary Heap
typedef struct binary_tree_s heap_t;

Compilation
To compile the project, you can use the provided Makefile. The Makefile includes rules to compile the project with specific flags and generate the executable.

Usage
You can use the binary tree functions implemented in this project to create, manipulate, and analyze binary trees in your C programs.
