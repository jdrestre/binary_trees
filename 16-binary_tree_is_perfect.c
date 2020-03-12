#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Point to a root
 * Return: height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_2 = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		count_1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		count_2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (count_1 > count_2)
		{return (count_1); }
		else
		{return (count_2); }

	}
	return (0);
}

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
 * binary_tree_is_perfect - function that check if is perfect binary tree
 * @tree: Point to a root
 * Return: 1 if is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, z = 0, max = 0;

	h = binary_tree_height(tree);
	z = binary_tree_size(tree);

	max = (1 << (h + 1)) - 1;

	if (max == z)
	{return (1); }
	else
	{return (0); }
}
