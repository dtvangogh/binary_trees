#include "binary_trees.h"

/**
*CountNodesOnOneSide-calculates nodes in one side from initial root
*@tree: the node to start at
*@nodes: node count
*Return:size of one side of tree
**/

size_t countNodes(const binary_tree_t *tree)
{
	size_t nodes = 1;
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		nodes += 1;
	if (tree->right != NULL)
		nodes += 1;
	return (nodes);
}

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: a pointer to the tree to measure the size of
 *
 *Return: the size of the tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		counter += countNodes(tree->left);
	if (tree->right != NULL)
		counter += countNodes(tree->right);

	/*Add 1 for the root node*/
	return (counter + 1);
	//	{
	//if (tree == NULL)
	//return (0);
	//return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	//}
}
