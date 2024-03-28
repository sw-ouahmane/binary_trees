#include "binary_trees.h"

/**
 * find_leaves - a function that recursively finds the leaves of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t find_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	size = find_leaves(tree->left) + find_leaves(tree->right);
	return (size);
}

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (find_leaves(tree));
}
