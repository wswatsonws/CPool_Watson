#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

linked_list_t* my_params_to_list(int ac, char* const *av) ;

int my_list_size(linked_list_t const *begin)
{
	int i = 0;
	while (begin != NULL)
	{
		begin = begin->next;
		i = i + 1;
	}
	return (i);
}
