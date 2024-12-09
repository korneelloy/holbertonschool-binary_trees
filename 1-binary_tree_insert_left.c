#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new node as left child
 * @parent: pointer to parent node
 * @value: value of new node
 *
 * Return: pointer to new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}

	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
