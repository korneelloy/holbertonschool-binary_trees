#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full (0 or 2 children only)
 * @tree: pointer to tree
 *
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left)
		&& (binary_tree_is_full(tree->right)));
	}

	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (0);
}
