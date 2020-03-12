#include "binary_trees.h"

/**
 * binary_tree_is_full - that checks if a binary tree is full
 * @tree: Point to a root
 * Return: 1 if is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/**
	 * if (!tree)
	 * {return (0); }
	 *
	 * if (tree->left && tree->right)
	 * {
	 *	return (binary_tree_is_full(tree->left) &&
	 * binary_tree_is_full(tree->right));
	 */

	if (tree == NULL)
	{return (0); }

	if (!tree->right && !tree->left)
	{return (1); }

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
		 binary_tree_is_full(tree->right));
	}
	return (0);
}
