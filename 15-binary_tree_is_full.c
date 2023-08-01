#include "binary_trees.h"

/**
 * binary_tree_is_full - find if tree is full or not
 * @tree: tree to find
 * Return: 1 or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if ((left == right) == 1)
			return (1);
		else
			return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
