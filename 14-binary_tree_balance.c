#include "binary_trees.h"

/**
 * binary_tree_balance - balance of tree
 * @tree: to find the balance
 * Return: the balance or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	left_height = right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_balance(tree->right) + 1;
	return (left_height - right_height);
}
