#include "binary_trees.h"
/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp_left = NULL;
	binary_tree_t *temp_right = NULL;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			temp_left = tree->left;
		if (tree->right != NULL)
			temp_right = tree->right;
		tree = NULL;
		binary_tree_delete(temp_left);
		binary_tree_delete(temp_right);
	}
}
