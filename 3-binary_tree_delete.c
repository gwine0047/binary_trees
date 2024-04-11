#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a pointer to the root node of the tree
 * Description: If tree is NULL, return
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
