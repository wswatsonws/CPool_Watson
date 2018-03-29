#ifndef FT_BTREE_H
# define FT_BTREE_H
#include "stddef.h"

typedef struct btree
{
	struct btree		*parent;
	struct btree		*left;
	struct btree		*right;
	void				*item;
}						btree_t;

int max(int a, int b);
btree_t	*btree_create_node(void *item);
void btree_apply_by_level(btree_t *root , void(*applyf) (void * item , int level , int is_first_elem));
void	btree_apply_infix(btree_t *root, int (*applyf)(void *));
void	btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void	btree_apply_suffix(btree_t *root, int (*applyf)(void *));
void	btree_insert_data(btree_t **root, void *item,int (*cmpf)());
size_t btree_level_count(btree_t const *root);
void	*btree_search_item(btree_t const *root , void const *data_ref , int (*cmpf)());

#endif
