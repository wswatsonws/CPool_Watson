#include "./include/btree.h"
#include "stddef.h"
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

size_t btree_level_count(btree_t const *root)
{
	if (root == 0)
		return (0);
	return (max(1 + btree_level_count(root->left),1 + btree_level_count(root->right)));
}
