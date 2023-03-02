#include "binary_trees.h"

/**
 * max - finds maximum height between 2 paths in tree
 * @left: length of the left path
 * @right: length of right path
 * Return: max between the two paths
 */

size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of tree else 0 on failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of binary trees
 * @tree: A pointer to the root node of the trees
 * Return: 1 on success, 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
