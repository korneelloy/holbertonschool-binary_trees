#include "binary_trees.h"

/**
 * binary_tree_inorder - going through binary tree in order
 * @tree: pointer to root of tree
 * @func: function to be called with parameter value of current node
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
