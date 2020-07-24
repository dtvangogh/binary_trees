#include "binary_trees.h"

/**
**binary_tree_uncle-returns ncle of the node
*@node: node to look at
*
*
*Return:value of uncle, or nil if no uncle
**/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (!(node->parent->parent))
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
