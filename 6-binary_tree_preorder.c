#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre binaire en pré-ordre.
 * @tree: Pointeur vers la racine de l'arbre.
 * @func: Pointeur vers une fonction à appeler pour chaque noeud.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
