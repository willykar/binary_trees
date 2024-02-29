#include "binary_trees.h"
/**
 * binary_tree_balance - A fucntion to measure balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor
 * Return: Balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
