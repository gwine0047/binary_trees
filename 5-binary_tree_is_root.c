#include "binary_trees.h"

/**
 * binary_tree_is_root - sees if a node is a root
 * @node: node
 *
 * Return: 1 if node is a root and 0 if not a root
 *         0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node == NULL || node->parent) ? 0 : 1);
}
