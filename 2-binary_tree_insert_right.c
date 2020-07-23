#include "binary_trees.h"

/**
**binary_tree_insert_right-
*
*
*
*Return:
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		child->right = parent->right;
		child->right->parent = child;
	}
	parent->right = child;
	return (child);
}
