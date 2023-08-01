#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling of a node
 * @node: node to find sibling
 * Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}
