#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that create a node at right side
 * @parent: Point to the root
 * @value: of the new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
	{return (NULL); }

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
	{return (NULL); }

	if (parent->right == NULL)
	{
		right_node->parent = parent;
		parent->right = right_node;
		right_node->left = NULL;
		right_node->right = NULL;
		right_node->n = value;
	}
	else
	{
		right_node->parent = parent;
		right_node->right = parent->right;
		right_node->left = NULL;
		right_node->n = value;
		parent->right->parent = right_node;
		parent->right = right_node;
	}

	return (right_node);
}
