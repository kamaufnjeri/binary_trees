#include "binary_trees.h"

/**
 * binary_tree_leaves - leaves in a binary tree
 * @tree: to find no of leaves
 * Return: leaves count of tree or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;
	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
