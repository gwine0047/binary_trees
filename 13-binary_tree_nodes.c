#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: node tree
 *
 * Return: number of nodes counted
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_size - reckons tree size
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
