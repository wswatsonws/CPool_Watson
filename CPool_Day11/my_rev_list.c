#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

int my_put_in_list(linked_list_t **list, char *data);

linked_list_t *my_params_to_list(int ac, char *const *av);

void my_rev_list(linked_list_t **begin)
{
	linked_list_t *pre = NULL;
	linked_list_t *cur = *begin;
	linked_list_t *next;
	while(cur != NULL) 
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	*begin = pre;
}


