#include "binary_trees.h"

/**
 * binary_trees_ancestor - find thte least common ancestor of two nodes
 * @first: to look
 * @second: to look
 * Return: the ancesto or null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *two, *one, *node;

	if (second == NULL || first == NULL)
		return (NULL);
	if (second == first)
		return ((binary_tree_t *)second);
	if (second->parent == NULL || first->parent == NULL)
		return (NULL);
	if (second->parent == first->parent)
		return ((binary_tree_t *)second->parent);

	if (second == first->parent)
		return ((binary_tree_t *)first->parent);

	if (first == second->parent)
		return ((binary_tree_t *)second->parent);
	two = (binary_tree_t *)second;
	one = (binary_tree_t *)first;

	while (two->parent != NULL)
	{
		two = two->parent;
		while (one->parent != NULL)
		{
			node = binary_trees_ancestor(one, two);
			one = one->parent;
			if (node != NULL)
				return (node);
		}
	}
	return (NULL);
}
