#include "binary_trees.h"

/**
*height - calcul the height of a tree
*@tree: the tree
*Return: the height or the tree
*/

int height(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	count = height(tree->left) + height(tree->right) + 1;
	return (count);
}
/**
*binary_tree_is_perfect -  checks if a binary tree is perfect
*@tree: the tree
*Return: 0 or 1
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (height(tree->left) == height(tree->right))
		return (1);
	return (0);
}
