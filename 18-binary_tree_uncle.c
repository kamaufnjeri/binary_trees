#include "binary_trees.h"
/**
 * binary_tree_uncle - find sibling of a node
 * @node: node to find sibling
 * Return: sibling node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
	return (NULL);
}
