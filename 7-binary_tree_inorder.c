#include "binary_trees.h"


/**
 * inorder_traversal - a function that handles the print of binary tree in
 * inorder way.
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void inorder_traversal(const binary_tree_t *tree, void (func)(int))
{
	if (tree->left)
		inorder_traversal(tree->left, func);
	func(tree->n);
	if (tree->right)
		inorder_traversal(tree->right, func);
}

/**
 * binary_tree_inorder - a function that goes through a binary tree using
 * inorder traversal
 *
 * @tree: binary_tree_t *
 * @func: void *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree && !func)
		return;

	while (tree->parent)
		tree = tree->parent;
	inorder_traversal(tree, func);
}
