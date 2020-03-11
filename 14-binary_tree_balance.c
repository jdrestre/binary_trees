#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree: Point to a root
 * Return: height of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		count_1 = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		count_2 = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

		return (count_1 - count_2);

	}
	return (0);
}
