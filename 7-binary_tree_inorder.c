#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that print a Binary tree in-order traversal
 * @tree: Point to a root
 * @func: function pointer
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree == NULL)
		{return; }

		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
