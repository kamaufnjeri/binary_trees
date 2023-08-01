#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: parent of node
 * @value: value to store in the node
 *
 * Return: new node created or Null if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
