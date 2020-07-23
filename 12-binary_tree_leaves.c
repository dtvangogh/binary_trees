#include "binary_trees.h"

/**
*binary_tree_leaves-returns number of leaves
*@tree: node you look at
*Return:number of leaves
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves = 0;
	size_t rightLeaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		leftLeaves = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		rightLeaves = binary_tree_leaves(tree->right);

	return (leftLeaves + rightLeaves);
}
//size_t binary_tree_leaves(const binary_tree_t *tree)
//{
//if (tree == NULL)
//return (0);
//if (tree->left == NULL && tree->right == NULL)
//return (1);
//return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

//}
