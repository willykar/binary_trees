#include "binary_trees.h"
/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 * Return: a pointer to the root node of the created BST, or NULL on failure
*/
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int a;
	bst_t *root = NULL;

	for (a = 0; a < size; a++)
		bst_insert(&root, array[a]);

	return (root);
}
