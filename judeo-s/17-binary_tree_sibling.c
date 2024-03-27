#include "binary_trees.h"


/**
 * binary_tree_sibling - a function that finds the sibling of a node.
 *
 * @node: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int value;

	if (!node || !node->parent)
		return (NULL);

	value = node->n;
	node = node->parent;
	if (node->left && node->right)
	{
		if (node->left->n == value)
			return (node->right);
		else
			return (node->left);
	}
	else
		return (NULL);
}

