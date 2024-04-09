#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node on the left child
 * @parent: A pointer to the parent.
 * @value: A value for the node.
 *
 * Return: a pointer to the node or NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/**
		*creating a new_node to point to the parent whose
		*value is to be manipulated.We use the 0-binary_tree_node
	*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		/*
			* if the root parent has a left node, the new node will
			* point to it and then takes its place as a new parent to
			* the left node
		*/
		new_node->left = parent->left;
		parent->left->parent = new_node
	}
	parent->left = new_node;
	return (new_node);
}
