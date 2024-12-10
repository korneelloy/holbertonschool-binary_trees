#include "binary_trees.h"

/**
 * binary_tree_postorder - going through binary tree in postorder
 * @tree: pointer to root of tree
 * @func: function to be called with parameter value of current node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
