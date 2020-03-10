#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that print a Binary tree in pre-order
 * @tree: Point to a root
 * @func: function pointer
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree == NULL)
		{return; }

		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
