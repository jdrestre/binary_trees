#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth a node in binary tree
 * @tree: pointer to node to measuare depth
 * Return: depth a node, or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		if (tree->parent)
		{
			tree = tree->parent;
			depth++;
		}
		else
		{
			break;
		}
	}
	return (depth);

/* return ((tree && tree->parent) ? */
/* 1 + binary_tree_depth(tree->parent) : 0); */
}
