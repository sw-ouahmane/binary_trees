#include "binary_trees.h"


/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of
 * two nodes.
 * @first: binary_tree_t *
 * @second: binary_tree_t *
 * Return: binary_tree_t *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *temp;
	binary_tree_t *first_ancestor, *second_ancestor;

	if (!first || !second)
		return (NULL);

	temp = second;
	while (temp)
	{
		if (temp == first)
			return ((binary_tree_t *)first);
		temp = temp->parent;
	}

	temp = first;
	while (temp)
	{
		if (temp == second)
			return ((binary_tree_t *)second);
		temp = temp->parent;
	}

	first_ancestor = first->parent;
	second_ancestor = second->parent;
	while (first_ancestor)
	{
		while (second_ancestor)
		{
			if (first_ancestor == second_ancestor)
				return (first_ancestor);
			second_ancestor = second_ancestor->parent;
		}
		first_ancestor = first_ancestor->parent;
		second_ancestor = second->parent;
	}
	return (NULL);
}
