#include "binary_trees.h"

/**
 * binary_tree_height_side - calculates height of branch
 * @node: pointer to tree
 *
 * Return: size / height
 */


size_t binary_tree_height_side(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
		return (1 + binary_tree_height_side(node->left));
	return (1 + binary_tree_height_side(node->right));
}



/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to tree
 *
 * Return: size / height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height_side(tree->left);
	right = binary_tree_height_side(tree->right);

	if (left > right)
		return (left);

	return (right);
}
