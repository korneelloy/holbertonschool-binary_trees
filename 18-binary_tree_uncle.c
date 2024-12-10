#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of given node
 * @node: given node
 *
 * Return: pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/** node in left branch */
	if (node->parent->parent->left->right == node ||
	node->parent->parent->left->left == node)
	{
		return (node->parent->parent->right);
		return (NULL);
	}

	/**   node in right branch */
	else if (node->parent->parent->right->right == node ||
	node->parent->parent->right->left == node)
	{
		return (node->parent->parent->left);
		return (NULL);
	}
	return (NULL);
}



