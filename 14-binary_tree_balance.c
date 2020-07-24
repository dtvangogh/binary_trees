#include "binary_trees.h"

/**
*binary_tree_height-returns height of the binary tree
*@tree: the node we start at
*Return: height of the binary tree
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int rightHeight, leftHeight;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftHeight = binary_tree_height(tree->left) + 1;
	rightHeight = binary_tree_height(tree->right) + 1;

	if (rightHeight > leftHeight)
		return (rightHeight);
	else
		return (leftHeight);
}

/**
*binary_tree_balance-calculates balance factor of a tree
*@tree: the node to start at
*Return:the balance factor
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
