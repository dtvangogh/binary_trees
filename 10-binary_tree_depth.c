#include "binary_trees.h"

/**
*binary_tree_depth-calculates how deep each node is
*@tree: the node to look at
*Return:depth of node
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;
	if (tree == NULL || tree->parent == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}

	return (depth);
}
