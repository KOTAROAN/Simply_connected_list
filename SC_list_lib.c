#include <stdlib.h>
#include "D:\Code\Tasks\Simply_connected_list\SC_list_lib.h"

struct item *list_init(const int *arr, const int arr_size)
{
	int i;
	if ( (arr_size == 0) || (!arr) )
		return NULL;
	struct item *first, *last, *tmp;
	first = NULL;
	for(i = 0; i<arr_size; i++)
	{
		tmp = malloc(sizeof(struct item));
		tmp->number = arr[i];
		tmp->next = NULL;
		if(!i)
		{
			first = tmp;
			last = tmp;
		}
		else
		{
			last->next = tmp;
			last = tmp;
		}
	}
	return first;
}


void print_list(const struct item *first)
{
	struct item *current = first;
	while(current)
	{
		printf("%d%s", current->number, (current->next)? ", " : ".\n");
		current = current->next;
	}
}

struct item *add_item(struct item *first, int value)
{
	struct item *tmp;
	tmp = malloc(sizeof(struct item));
	tmp->number = value;
	tmp->next = first;
	return tmp;
}