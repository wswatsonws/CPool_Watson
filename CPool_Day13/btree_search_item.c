#include "./include/btree.h"

void	*btree_search_item(btree_t const *root , void const *data_ref , int (*cmpf)())
{
	if (root == 0)
		return (0);
	if (cmpf(data_ref, root->item) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	else
		return (btree_search_item(root->right, data_ref, cmpf));
}
