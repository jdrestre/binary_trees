#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that create a node at left side
 * @parent: Point to the root
 * @value: of the new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
	{return (NULL); }

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
	{return (NULL); }

	if (parent->left == NULL)
	{
		left_node->parent = parent;
		parent->left = left_node;
		left_node->left = NULL;
		left_node->right = NULL;
		left_node->n = value;
	}
	else
	{
		left_node->parent = parent;
		left_node->left = parent->left;
		left_node->right = NULL;
		left_node->n = value;
		parent->left->parent = left_node;
		parent->left = left_node;
	}

	return (left_node);
}
