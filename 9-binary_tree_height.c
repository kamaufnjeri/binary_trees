#include "binary_trees.h"

/**
 * binary_tree_height - find height of tree
 * @tree: tree to check height
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	left_height = right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}
	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}
