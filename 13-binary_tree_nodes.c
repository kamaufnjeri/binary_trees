#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes in a binary tree
 * @tree: to find no of nodes
 * Return: leaves count of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;
	if (tree->left != NULL)
		nodes += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
