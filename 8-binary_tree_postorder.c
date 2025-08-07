#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - go through a binary tree using post-order traversal
=======
 * binary_tree_postorder -goes through a binary tree using post-order traversal
>>>>>>> develop
 * @tree: the tree to go through
 * @func: the function to apply to the tree
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
