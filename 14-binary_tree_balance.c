#include "binary_trees.h"

/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: the tree
*Return: count or 0 if NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int countR = 0, countL = 0;
	const binary_tree_t *tmp;

	if (tree == NULL)
		return (0);

	tmp = tree;
	while (tree->left != NULL)
	{
		tree = tree->left;
		countL++;
	}
	while (tmp->right != NULL)
	{
		tmp = tmp->right;
		countR++;
	}
	return (countL - countR);
}
