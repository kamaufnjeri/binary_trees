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

	for (one = first; one != NULL; one = one->parent)
		for (two = second; two != NULL; two = two->parent)
			if (two == one)
				return ((binary_tree_t *)two);
	return (NULL);

}
