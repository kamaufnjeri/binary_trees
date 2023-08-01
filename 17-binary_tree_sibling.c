#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of a node
 * @node: node to find sibling
 * Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	if (node == NULL || parent == NULL)
		return (NULL);
	if (parent->left != NULL || parent->right != NULL)
	{
		if (node == parent->left)
			return (parent->right);
		else if (node == parent->right)
			return (parent->left);
		else
			return (NULL);
	}
	return (NULL);
}

