#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, or 0 if tree is NULL
 **/


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_h = binary_tree_balance(tree->left);
		left_h++;
	}

	if (tree->right)
	{
		right_h = binary_tree_balance(tree->right);
		right_h++;
	}


	return (left_h - right_h);
}
