#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (count + 1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
