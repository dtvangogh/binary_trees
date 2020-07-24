#include "binary_trees.h"

/**
**binary_tree_sibling-finds sibling of the node
*@sibling: the node to check
*
*
*Return:
**/

binary_tree_t *binary_tree_sibling(binary_tree_t *sibling)
{
	if (!sibling)
		return (NULL);
	if (!(sibling->parent))
		return (NULL);
	if (sibling == sibling->parent->left)
		return (sibling->parent->right);
	return (sibling->parent->left);
}
