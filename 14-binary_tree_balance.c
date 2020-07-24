#include "binary_trees.h"

/**
*binary_tree_balance_helper-calculates balance factor of a tree
*@tree: the node to start at
*Return:the balance factor
**/

int binary_tree_balance_helper(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height = binary_tree_balance(tree) + 1;

	return (height);
}
/**
*binary_tree_balance-calculates balance factor of a tree
*@tree: the node to start at
*Return:the balance factor
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	leftHeight = binary_tree_balance_helper(tree->left);
	rightHeight = binary_tree_balance_helper(tree->right);
	return (leftHeight - rightHeight);
}
