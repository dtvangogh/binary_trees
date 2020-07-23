#include "binary_trees.h"

/**
*binary_tree_inorder-prints binary tree in order
*@root: the root in the tree
*@func: print num function
*
*Return: void
**/

void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;
	binary_tree_inorder(root->left, func);
	func(root->n);
	binary_tree_inorder(root->right, func);

}
