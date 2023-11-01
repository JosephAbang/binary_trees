#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height, if tree is NULL, your function must return 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL && tree->right != NULL)
	{
		tree = tree->left;
		count++;
	}
	return (count);
}
