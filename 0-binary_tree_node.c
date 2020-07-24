#include "binary_trees.h"

/**
**binary_tree_node-creates a node
*@parent: where to insert node
*@value: the value inside node
*
*Return:return the node to create
**/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->parent = parent;
	child->n = value;
	child->right = NULL;
	child->left = NULL;
	return (child);
}
