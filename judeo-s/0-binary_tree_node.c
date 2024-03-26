#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: binary_tree_t *
 * @value: int
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
