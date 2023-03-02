#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in tree
 * @tree: pointer to the node to measure the depth
 * Return: 1 on success, 0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
