#include "binary_trees.h"

/**
 * binary_tree_height_side - calculates height of branch
 * @node: pointer to tree
 *
 * Return: size / height
 */

int binary_tree_height_side(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
		return (1 + binary_tree_height_side(node->left));
	return (1 + binary_tree_height_side(node->right));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	return (0);

	if (tree->left)
	left_height = binary_tree_height_side(tree->left);

	if (tree->right)
	right_height = binary_tree_height_side(tree->right);

return (left_height - right_height);
}
