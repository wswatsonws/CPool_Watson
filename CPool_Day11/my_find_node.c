#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *tmp = (linked_list_t *)begin;
	while(tmp != NULL) 
	{
		if(cmp(tmp->data, data_ref) == 0)
			return tmp;
		tmp = tmp->next;
	}
	return (NULL);
}
