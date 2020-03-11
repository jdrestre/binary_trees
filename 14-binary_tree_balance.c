#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Point to a root
 * Return: height of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_1 = 0, count_2 = 0;

	if (tree == NULL)
	{return (0); }

	if (tree->left)
	{count_1 = 1 + binary_tree_balance(tree->left); }
	else
	{count_1 = 0 + binary_tree_balance(tree->left); }

	if (tree->right)
	{count_2 = 1 + binary_tree_balance(tree->right); }
	else
	{count_2 = 0 + binary_tree_balance(tree->right); }

	return (count_1 - count_2);
}
