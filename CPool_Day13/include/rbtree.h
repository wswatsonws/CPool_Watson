#include <stddef.h>
typedef struct btree
{
	struct btree		*parent;
	struct btree		*left;
	struct btree		*right;
	void				*item;
}						btree_t;


typedef struct rb_node
{
	struct rb_node *left;
	struct rb_node *right;
	void *data;
	enum RB_COLOR {RB_BLACK, RB_RED} color;
} rb_node_t;

btree_t *btree_create_node(void *item);
void btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void btree_apply_infix(btree_t *root, int (*applyf)(void *));
void btree_apply_suffix(btree_t *root, int (*applyf)(void *));
void btree_insert_data(btree_t **root, void *item, int (*cmpf)());
void *btree_search_item(btree_t const *root, void const *data_ref, int (*cmpf)());
size_t btree_level_count(btree_t const *root);
void btree_apply_by_level(btree_t *root, void (*applyf)(void *item, int level, int is_first_elem));
void rb_insert(rb_node_t **root, void *data, int (*cmpf)());
void rb_remove(rb_node_t **root, void *data, int (*cmpf)(void *, void *), void (*f) (void *));
