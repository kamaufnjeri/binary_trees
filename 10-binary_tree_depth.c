#include "binary_trees.h"

/**
 * binary_tree_height - find depth of node
 * @tree: node pointer
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	
	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
		return (depth);
	}
	else
		return (0);
}
