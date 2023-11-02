#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Uncle node or NULL
 **/


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *grandad;

	if (node == NULL)
		return (NULL);
	if (!node->parent->parent || !node->parent)
		return (NULL);
	grandad = node->parent->parent;
	if (grandad->left == node->parent)
		uncle = grandad->right;
	else
	{
		if (grandad->left)
			uncle = grandad->left;
		else
			return (NULL);
	}
	return (uncle);
}
