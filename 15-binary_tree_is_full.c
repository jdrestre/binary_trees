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

/**
 * binary_tree_is_full - that checks if a binary tree is full
 * @tree: Point to a root
 * Return: 1 if is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_1 = 0, count_2 = 0;

	if (tree == NULL)
	{return (0); }

	if ((tree->left && tree->right) || (!tree->right && !tree->left))
	{
		count_1 = binary_tree_size(tree->left);
		count_2 = binary_tree_size(tree->right);

		if (count_1 == count_2)
		{return (1); }
	}
	return (0);
}
