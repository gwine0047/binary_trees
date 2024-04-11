#include "binary_trees.h"

/**
 * binary_tree_size - gets a binary tree's size
 * @tree: node tree
 *
 * Return: size of the tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
