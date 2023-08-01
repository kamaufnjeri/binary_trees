#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse in in order
 * @tree: to traverse
 * @func: po0inter to a function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
