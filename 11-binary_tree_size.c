#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: Point to a root
 * Return: size of a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0, count_3 = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		count_1 = tree->left ? binary_tree_size(tree->left) : 0;
		count_2 = tree->right ? binary_tree_size(tree->right) : 0;

		count_3 = count_1 + count_2 + 1;

		return (count_3);

	}
	return (0);
}
