#include "binary_trees.h"

/**
 * binary_tree_leaves - function that count the leaves of a binary tree
 * @tree: Point to a root
 * Return: number of leaves of a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		if (!tree->left && !tree->right)
		{count += 1; }
		else
		{
			if (tree->left != NULL)
			{count += binary_tree_leaves(tree->left); }
			if (tree->right != NULL)
			{count += binary_tree_leaves(tree->right); }
		}
		return (count);
	}
	return (0);
}
