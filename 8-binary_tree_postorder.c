#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that print a Binary tree in-order traversal
 * @tree: Point to a root
 * @func: function pointer
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree == NULL)
		{return; }

		binary_tree_postorder(tree->left, func);
	        binary_tree_postorder(tree->right, func);
		func(tree->n);

	}
}
