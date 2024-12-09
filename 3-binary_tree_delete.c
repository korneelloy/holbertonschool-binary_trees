#include "binary_trees.h"

/**
 * binary_tree_delete - deleting entire binary_tree
 * @tree: pointer to the tree to be deleted
 *
 * Return: no return
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
