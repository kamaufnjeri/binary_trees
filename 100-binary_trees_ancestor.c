#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowes
 * @first: node to search ancestor
 * @second: the node to search
 *
 * Return: ancestor of nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *one, *two;

	two = (binary_tree_t *)second;
	one = (binary_tree_t *)first;

	while (two != NULL)
	{
		while (one->parent != NULL)
		{
			if (one == two)
				return (one);`
			one = one->parent;
		}
		two = two->parent;
	}
	return (NULL);
}
