#include "binary_trees.h"

/**
 * max - finds the maximum height between 2 paths of tree(left, right)
 * @left: length of the left path
 * @right: length of the right path
 * Return: max between the 2 paths
 */
size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - Measures the height of binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: 1 on success and 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}
