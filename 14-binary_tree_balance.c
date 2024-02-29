#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: Height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right);

	return (left_height >= right_height ?
			(left_height + 1) : (right_height + 1));
}
/**
 * binary_tree_balance - A fucntion to measure balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor
 * Return: Balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
