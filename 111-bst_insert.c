#include "binary_trees.h"
/**
 * bst_insert - a function that inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to
 * insert the value
 * @value: is the value to store in the node to be inserted
 * Return: a pointer to the created node, or NULL on failure
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;
	bst_t *sec_tmp = NULL;
	bst_t *new_node = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	tmp = *tree;
	while (tmp)
	{
		sec_tmp = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	new_node = binary_tree_node(NULL, value);

	if (sec_tmp == NULL)
		sec_tmp = new_node;
	else if (value < sec_tmp->n)
	{
		sec_tmp->left = new_node;
		new_node->parent = sec_tmp;
	}
	else
	{
		sec_tmp->right = new_node;
		new_node->parent = sec_tmp;
	}

	return (new_node);
}
