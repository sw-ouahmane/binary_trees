#include "binary_trees.h"
/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 *
 * @tree: bst_t **
 * @value: int
 * Return: bst_t *
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *new;

	if (tree)
	{
		curr = *tree;

		if (!curr)
		{
			new = binary_tree_node(curr, value);
			if (!new)
				return (NULL);
			return (*tree = new);
		}

		if (value < curr->n)
		{
			if (curr->left)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(curr, value);
			if (!new)
				return (NULL);
			return (curr->left = new);
		}
		if (value > curr->n)
		{
			if (curr->right)
				return (bst_insert(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (!new)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
