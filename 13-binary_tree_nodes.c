#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child
 * @tree: pointer to the root node of the tree
 * Return: 1 on success, 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t leftnode;
	size_t rightnode;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	leftnode = binary_tree_nodes(tree->left);
	rightnode = binary_tree_nodes(tree->right);
	count += ((leftnode + rightnode) + 1);
	return (count);
}
