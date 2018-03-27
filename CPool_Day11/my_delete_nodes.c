#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *temp = *begin;
	while (temp != NULL) 
	{
		if (temp != NULL && cmp(temp->data, data_ref) == 0) 
		{
			*begin = temp->next;
		}
		temp = temp->next;
	}
	return (0);
}
