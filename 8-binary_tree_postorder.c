#include "binary_trees.h"


/**
 * binary_tree_postorder - a function that goes through a binary tree using
 * postorder traversal
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
