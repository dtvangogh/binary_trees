#include "binary_trees.h"

/**
*binary_tree_is_root-checks if node is a root
*@node: the node
*Return: 1 if root or 0 if not
*
*Return:
**/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	/* if node has no parent, its a root */
		return (1);
	return (0);
}
