#include "binary_trees.h"

/**
 * comp - compares size of two int
 * @a: first int
 * @b: second int
 * Return: the biggest
 */

int comp(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * height - itterates through the tree to find the biggest branch
 * @tree: the tree to evaluate
 * Return: int, the biggest branch
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (comp(height(tree->left), height(tree->right)) + 1);
}
/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: the tree
*Return: count or 0 if NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
