#include "binary_trees.h"


/**
 * find_balance - a function that recursively finds the balance of a binary tree
 *
 * @tree: binary_tree_t *
 * Return: size_t
 */
size_t find_balance(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (!tree)
		return (0);

	left_count = (!(!tree->left)) + find_balance(tree->left);	
	right_count = (!(!tree->right)) + find_balance(tree->right);

	if (left_count > right_count)
		return (left_count - right_count);
	else
		return (left_count - right_count);
}

/**
 * binary_tree_balance - a function that measures the balance factor of a binary
 * tree
 *
 * @tree: binary_tree_t *
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (find_balance(tree));	
}
