#include "binary_trees.h"


/**
 * postorder_traversal - a function that handles the print of binary tree in
 * postorder way.
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void postorder_traversal(const binary_tree_t *tree, void (func)(int))
{
	if (tree->left)
		postorder_traversal(tree->left, func);
	if (tree->right)
		postorder_traversal(tree->right, func);
	func(tree->n);
}

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
	if (!tree && !func)
		return;

	while (tree->parent)
		tree = tree->parent;
	postorder_traversal(tree, func);
}
