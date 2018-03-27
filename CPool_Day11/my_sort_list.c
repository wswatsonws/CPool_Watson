#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
	linked_list_t	*act;
	linked_list_t	*next;
	void	 *tmp;
	act = *begin;
	next = (*begin)->next;
	while (next != NULL)
	{
		if (cmp(act->data, next->data) > 0)
		{
			tmp = act->data;
			act->data = next->data;
			next->data = tmp;
			act = *begin;
			next = (*begin)->next;
		}
		else
		{
			act = act->next;
			next = next->next;
		}
	}
}
