#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0 if tree is NULL
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_d = 0, right_d = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_d = binary_tree_is_perfect(tree->left);
	right_d = binary_tree_is_perfect(tree->right);

	if (tree->left && tree->right)
		return (left_d && right_d);

	return (0);
}
