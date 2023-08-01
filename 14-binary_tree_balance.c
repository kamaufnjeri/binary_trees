#include "binary_trees.h"

/**
 * binary_tree_height_1 - find height of tree
 * @tree: tree to check height
 * Return: height or 0 if tree is NULL
 */
int binary_tree_height_1(const binary_tree_t *tree)
{
	int right_height, left_height;

	left_height = right_height = 0;

	if (tree == NULL)
		return (-1);
	if (tree->left != NULL)
	{
		left_height = binary_tree_height_1(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height_1(tree->right) + 1;
	}
	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}

/**
 * binary_tree_balance - find balance of tree
 * @tree: tree to check balance
 * Return: balance or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree != NULL)
	{
		left = binary_tree_height_1(tree->left);
		right = binary_tree_height_1(tree->right);
		return (left - right);
	}
	return (0);
}
