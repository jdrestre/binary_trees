#include "binary_trees.h"

/**
 * binary_tree_nodes - function that count the nodes with childs of a BT
 * @tree: Point to a root
 * Return: number of childs of a tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		if (tree->left != NULL)
		{count += binary_tree_nodes(tree->left); }
		if (tree->right != NULL)
		{count += binary_tree_nodes(tree->right); }
		if (tree->left || tree->right)
		{return (count + 1); }
	}
	return (0);


 	/* size_t count_1 = 0, count_2 = 0, count_3 = 0;

	if (tree != NULL)
	{
		if (tree == NULL)
		{return (0); }

		count_1 = tree->left ? binary_tree_nodes(tree->left) : 0;
		count_2 = tree->right ? binary_tree_nodes(tree->right) : 0;

		if (tree->right || tree->right)
		{
			count_3 = count_1 + count_2 + 1;
		}

		return (count_3);

	}
	return (0); */
}
