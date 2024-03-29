#include "binary_trees.h"
/**
 * binary_tree_is_full - A function that checks if a
 * binary tree is full
 * @tree: pointer to the tree being checked
 * Return: 0 success 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 0 || right == 0)
		return (0);

	else
		return (1);
}
