#include "binary_trees.h"
/**
 * binary_tree_is_perfect - A function to check if a tree
 * is perfect
 * @tree: the tree being checked
 * Return: 0 for success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + binary_tree_is_perfect(tree->left);
		r = 1 + binary_tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}