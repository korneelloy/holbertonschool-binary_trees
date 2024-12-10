#include "binary_trees.h"

/**
 * binary_tree_depth - Mesure la profondeur d'un nœud dans un arbre binaire.
 * @tree: Un pointeur vers le nœud dont on souhaite mesurer la profondeur.
 *
 * Return: La profondeur du nœud, ou 0 si l'arbre est NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t  count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
