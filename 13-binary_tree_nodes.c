#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count the nodes with childs of a BT
 * @tree: Point to a root
 * Return: number of childs of a tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		if (tree->left != NULL)
		{count += binary_tree_nodes(tree->left); }
		if (tree->right != NULL)
		{count += binary_tree_nodes(tree->right); }
		if (tree->left || tree->right)
		{return (count + 1); }
	}
	return (0);
}
