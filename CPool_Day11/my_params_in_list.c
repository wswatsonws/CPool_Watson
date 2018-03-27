#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

int my_put_in_list(linked_list_t **list, char *data)
{
	linked_list_t	*elem;

	elem = malloc(sizeof(*elem));
	if (elem == NULL)
		return (1);
	elem->data = data;
	elem->next = *list;
	*list = elem;
	return (0);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
	int i = 0;
	linked_list_t	*list;

	list = NULL;
	while (i <= (ac - 1))
	{
		my_put_in_list(&list, av[i]);
		i = i + 1;
	}
	return (list);
}

