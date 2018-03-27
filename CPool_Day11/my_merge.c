#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

void my_concat_list (linked_list_t **begin1 , linked_list_t *begin2);

void my_sort_list(linked_list_t **begin, int (*cmp)());

void my_merge(linked_list_t **begin1 , linked_list_t *begin2 , int(*cmp)())
{
	my_concat_list(begin1, begin2);
	my_sort_list(begin1, cmp);
}
