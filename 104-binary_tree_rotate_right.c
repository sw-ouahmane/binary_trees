#include "binary_trees.h"


/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 *
 * @tree: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (!tree || !tree->left)
		return (NULL);

	pivot = tree->left;
	tmp = pivot->right;
	pivot->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;

	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;

	if (tmp)
	{
		if (tmp->left == tree)
			tmp->left = pivot;
		else
			tmp->right = pivot;
	}
	return (pivot);
}
