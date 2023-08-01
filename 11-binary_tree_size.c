#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 * @tree: to find size
 * Return: size of tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		size += binary_tree_size(tree->left);
	if (tree->right != NULL)
		size += binary_tree_size(tree->right);
	return (size + 1);
}
