#include "binary_trees.h"

/**
 * binary_tree_is_leaf - csees if a node is a leaf
 * @node: node
 *
 * Return: 1 if node is a leaf and 0 if not
 *         0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
