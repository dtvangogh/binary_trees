#include "binary_trees.h"

/**
*binary_tree_postorder-
*
*
*
*Return:
**/

void binary_tree_postorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;
	binary_tree_postorder(root->left, func);
	binary_tree_postorder(root->right, func);
	func(root->n);
}
