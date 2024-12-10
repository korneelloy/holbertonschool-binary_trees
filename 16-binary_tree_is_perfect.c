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

/**
 * binary_tree_height - calculates height of binary tree
 * @tree: pointer to tree
 *
 * Return: size / height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	if (tree->right)
		return (1 + binary_tree_height(tree->right));
	else
		return (0);
}


/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * (meaning 0 or 2 children only and same depth)
 * @tree: pointer to tree
 *
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full = binary_tree_is_full(tree);

	if (is_full != 1)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	printf("%d\n", tree->right->n);
	printf("%d\n", tree->left->n);

	printf("%ld\n", binary_tree_height(tree->right));

	printf("%ld\n", binary_tree_height(tree->left));
	return (1);
}
