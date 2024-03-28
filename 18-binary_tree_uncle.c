#include "binary_trees.h"


/**
 * find_sibling - a function that finds the sibling of a node.
 *
 * @node: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *find_sibling(binary_tree_t *node)
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


/**
 * binary_tree_uncle - a function that finds the uncle of a node.
 *
 * @node: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->parent || !node->parent->parent)
		return (NULL);

	return (find_sibling(node->parent));
}
