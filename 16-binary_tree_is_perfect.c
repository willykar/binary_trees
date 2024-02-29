#include "binary_trees.h"

/**
 * binary_tree_height - Gets the height of a binary tree
 * @tree: A pointer to a tree;
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - A function to check if a tree
 * is perfect
 * @tree: the tree being checked
 * Return: 0 for success
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
