#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count the nodes with childs of a BT
 * @tree: Point to a root
 * Return: number of childs of a tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		if (!tree->left && !tree->right)
		{return (1); }
		else
		{
			return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
		}
	}
	return (0);
}
