#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, or 0 if tree is NULL
 **/


int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	if (tree->left)
		left = 1 + left;
	if (tree->right)
		right = 1 + right;

	if (!tree->left && !tree->right)
		return (0);

	return (left - right);
}
