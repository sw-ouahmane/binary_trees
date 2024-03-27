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
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect.
 *
 * @tree: binary_tree_t *
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	size_t r_size, l_size, r_height, l_height;

	r_size = find_size(tree->right);
	l_size = find_size(tree->left);

	r_height = find_height(tree->right) - 1;
	l_height = find_height(tree->left) - 1;

	if (r_size != l_size)
		return (0);
	if (r_height != l_height)
		return (0);
	else
		return (1);
}
