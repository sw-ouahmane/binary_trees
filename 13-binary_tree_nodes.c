#include "binary_trees.h"

/**
 * find_nodes - a function that recursively finds the nodes of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t find_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = find_nodes(tree->left) + find_nodes(tree->right);
	size += (tree->left || tree->right);
	return (size);
}

/**
 * binary_tree_nodes - a function that counts the nodes with at least
 * 1 child in a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (find_nodes(tree));
}
