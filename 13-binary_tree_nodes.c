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
		return (0);

	if (tree->left != NULL)
		if (tree->left != NULL && tree->right != NULL)
		{
			nodes += 1;
		}
	if (tree->right != NULL)
		if (tree->left != NULL && tree->right != NULL)
		{
			nodes += 1;
		};
	return (nodes);
}

/**
*binary_tree_nodes-count nodes, only if node has a child
*@tree: node to look at
*Return:number of nodes with a child
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		counter += countNodes(tree->left);
	if (tree->right != NULL)
		counter += countNodes(tree->right);

	/*Add 1 for the root node*/
	return (counter + 1);
}
