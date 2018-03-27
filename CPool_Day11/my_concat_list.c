#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

void my_sort_list(linked_list_t **begin, int (*cmp)());

void my_concat_list (linked_list_t **begin1 , linked_list_t *begin2) 
{
	linked_list_t *temp = *begin1;
	while(temp->next != NULL)
	{
		temp =temp->next;
	}
	temp->next =begin2;
}
