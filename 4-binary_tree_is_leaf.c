#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that delete a node
 * @node: Point to the root
 * Return:1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right || node->left)
		return (0);

	return (1);
}
