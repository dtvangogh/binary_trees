#include "binary_trees.h"

/**
**binary_tree_insert_left-
*
*
*
*Return:
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		child->left = parent->left;
		child->left->parent = child;
		parent->left = child;
	}
	parent->left = child;
	return (child);
}
