#include "./include/btree.h"

void btree_apply_by_level(btree_t *root , void(*applyf) (void * item , int level , int is_first_elem))
{
	int m_current_level = 0;
	int m_is_first_elem = 1;
	if (root == 0)
	{
		m_current_level--;
	}
	applyf(root->item, m_current_level, m_is_first_elem);
	m_current_level++;
	btree_apply_by_level(root->left, applyf);
	if (root->left)
		m_is_first_elem = 0;
	m_current_level++;
	btree_apply_by_level(root->right, applyf);
	m_current_level--;
}
