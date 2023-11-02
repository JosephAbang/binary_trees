#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: sinling node or NULL
 **/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling, *papa;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	papa = node->parent;

	if (papa->left == node)
		sibling = papa->right;
	else
	{
		if (papa->left)
			sibling = papa->left;
		else
			return (NULL);
	}

	return (sibling);
}
