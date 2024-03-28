#include "binary_trees.h"
#include "limits.h"


/**
 * find_bst - Checks if a binary tree is a valid binary search tree.
 *
 * @tree: binary_tree_t *
 * @low: int
 * @high: int
 * Return: int
 */
int find_bst(const binary_tree_t *tree, int low, int high)
{
	if (tree)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (find_bst(tree->left, low, tree->n - 1) &&
			find_bst(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 *
 * @tree: binary_tree_t *
 * Return: int
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_bst(tree, INT_MIN, INT_MAX));
}
