#include "binary_trees.h"


/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 *
 * @tree: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (!tree || !tree->right)
		return (NULL);

	pivot = tree->right;
	tmp = pivot->left;
	pivot->left = tree;
	tree->right = tmp;

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
