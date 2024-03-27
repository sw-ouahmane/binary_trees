#include "binary_trees.h"

/**
 * find_height - a function that recursively finds the height of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t find_height(const binary_tree_t  *tree)
{
	size_t right_height, left_height;

	if (!tree)
		return (0);

	right_height = find_height(tree->right);
	left_height = find_height(tree->left);

	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (find_height(tree) - 1);
}
