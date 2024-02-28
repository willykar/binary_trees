#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: size of binary
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == 0 && tree->right == 0)
	{
		return (1);
	}
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return ((left + right) + 1);
}
