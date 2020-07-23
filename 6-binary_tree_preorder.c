#include "binary_trees.h"

/**
*binary_tree_preorder-prints binary tree starting with root
*@root: the root node
*@func: the print num funtion
*
*Return: void
**/

void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;
	print_num(root->n);
	binary_tree_preorder(root->left, func);
	binary_tree_preorder(root->right, func);
}
