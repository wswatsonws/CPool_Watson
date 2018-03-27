#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
	linked_list_t *list_ptr;
	linked_list_t *new;
	list_ptr = *begin;
	while(list_ptr->next != NULL)
		list_ptr = list_ptr->next;
	new = malloc(sizeof(linked_list_t));
	new->data = data;
	list_ptr->next = new;
	my_sort_list(begin,cmp);
}
