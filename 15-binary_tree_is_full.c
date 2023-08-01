#include "binary_trees.h"

/**
 * binary_tree_is_full_side - find if tree is full or not
 * @tree: tree to find
 * Return: 1 or 0
 */

int binary_tree_is_full_side(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL && tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full_side(tree->left);
		right = binary_tree_is_full_side(tree->right);
		if ((left == right) == 1)
			return (1);
	}
	return (0);
}
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
		left = binary_tree_is_full_side(tree->left);
		right = binary_tree_is_full_side(tree->right);
		if ((left == right) == 1)
			return (1);
	}
	return (0);
}
