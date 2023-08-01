#include "binary_trees.h"

/**
 * count_levels - count levels of a tree
 * @tree: to count level
 * Return: 1 if levels are equal or zero
 */
int count_levels(const binary_tree_t *tree)
{
	int countl, countr;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left != NULL)
	{
		countl = count_levels(tree->left) + 1;
		countr = count_levels(tree->right) + 1;
		if (countl == countr)
			return (1);
		else
			return (0);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: to check
 * Return: 1 if perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, count;

	count = count_levels(tree);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		if (left == 1 && right == 1 && count == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}
