#include "binary_trees.h"

/**
 * find_size - a function that recursively finds the size of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t find_size(const binary_tree_t  *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + find_size(tree->left) + find_size(tree->right);
	return (size);
}

/**
 * binary_tree_size - a function that measures the height of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (find_size(tree));
}
