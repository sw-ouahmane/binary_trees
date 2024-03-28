#include "binary_trees.h"


/**
 * preorder_traversal - a function that handles the print of binary tree in
 * preorder way.
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void preorder_traversal(const binary_tree_t *tree, void (func)(int))
{
	func(tree->n);
	if (tree->left)
		preorder_traversal(tree->left, func);
	if (tree->right)
		preorder_traversal(tree->right, func);
}

/**
 * binary_tree_preorder - a function that goes through a binary tree using
 * pre-order traversal
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree && !func)
		return;

	while (tree->parent)
		tree = tree->parent;
	func(tree->n);
	preorder_traversal(tree->left, func);
	preorder_traversal(tree->right, func);
}
