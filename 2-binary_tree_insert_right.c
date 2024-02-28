#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)

	binary_tree_t new_node;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->
