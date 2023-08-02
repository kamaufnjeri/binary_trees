#include "binary_trees.h"

/**
 * loop - loop through the nodes
 * @one: to loop
 * @two: to loop
 * Return: NULL or node
 */
binary_tree_t *loop(binary_tree_t *one, binary_tree_t *two)
{
	binary_tree_t *node;

	if (one == NULL || two == NULL)
		return (NULL);

	if (one->parent == NULL)
	{
		while (two->parent != NULL)
		{
			two = two->parent;
			if (two == one)
				return (two);
		}
	}
	if (two->parent == NULL)
	{
		while (one->parent != NULL)
		{
			one = one->parent;
			if (two == one)
				return (one);
		}
	}
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
	if (second->parent == first->parent)
		return ((binary_tree_t *)second->parent);

	if (second == first->parent)
		return ((binary_tree_t *)first->parent);

	if (first == second->parent)
		return ((binary_tree_t *)second->parent);
	two = (binary_tree_t *)second;
	one = (binary_tree_t *)first;

	node = loop(two, one);
	return (node);
}
