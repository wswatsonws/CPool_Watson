#include "./include/btree.h"
#include <stdlib.h>

btree_t	*btree_create_node(void *item)
{
	btree_t	*node;
	node = (btree_t *)malloc(sizeof(btree_t));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
