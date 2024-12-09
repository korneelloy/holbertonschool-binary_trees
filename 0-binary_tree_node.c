#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_node - create a binary tree node
 * @parent: the parent node
 * @value: the value of the node
 *
 * Return: pointer to binary newlyt created tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
