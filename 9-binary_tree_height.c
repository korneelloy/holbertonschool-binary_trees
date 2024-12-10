#include "binary_trees.h"

/**
 * binary_tree_size - size of binary tree
 * @tree: pointer to tree
 *
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to tree
 *
 * Return: size / height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_branch = binary_tree_size(tree->left);
	size_t right_branch = binary_tree_size(tree->right);

	if (tree == NULL)
		return (0);

	if (left_branch > right_branch)
		return (left_branch);
	return (right_branch);
}
