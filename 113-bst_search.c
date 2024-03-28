#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree.
 *
 * @tree: bst+t *
 * @value: int
 * Return: bst_t *
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
