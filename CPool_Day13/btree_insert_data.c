#include "./include/btree.h"

void	btree_insert_data(btree_t **root, void *item,int (*cmpf)())
{
	if (*root == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) >= 0)
		btree_insert_data(&((*root)->right), item, cmpf);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
}
