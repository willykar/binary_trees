#include "binary_trees.h"
/**
 * successor - A function that gets the next successor
 * node in the right subtree
 * @node: The tree to check
 * Return: the min value of the tree
 */
int successor(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = successor(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}
}

/**
 * two_children - A function that gets the next successor using the min
 * value in the right subtree
 * @root: A node that has two children
 * Return: (value found)
 */
int two_children(bst_t *root)
{
	int value = 0;

	value = successor(root->right);
	root->n = value;
	return (value);
}

/**
 *remove_type - A function that removes a node depending of its children
 *@root: The node to remove
 *Return: 0 if it has no children or other value if it has
 */
int remove_type(bst_t *root)
{
	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
		return (two_children(root));
}

/**
 * bst_remove - a function that removes a node from a
 * Binary Search Tree
 * @root: is a pointer to the root node of the tree
 * @value: is the value to remove in the tree
 * Return: a pointer to the new root node of the tree after
 * removing the desired value
*/
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_type(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);
	return (root);
}
