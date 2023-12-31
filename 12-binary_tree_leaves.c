#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of tree or 0 if tree is NULL
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0, left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		num++;

	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);
	return (num + left + right);
}
