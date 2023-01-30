#include <stdlib.h>
#include "D:\Code\Tasks\Simply_connected_list\SC_list_lib.h"

struct item *list_init(const int *arr, const int arr_size)
{
	if ( (arr_size == 0) || (!arr) )
		return NULL;
	int i;
	struct item *first = NULL, *tmp;
	for(i = arr_size-1; i>0; i--)
	{
		tmp = malloc(sizeof(struct item));
		tmp->number = arr[i];
		tmp->next = first;
		first = tmp;
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

// struct item *add_item(struct item *first, int value)
// {
// 	struct item *tmp;
// 	tmp = malloc(sizeof(struct item));
// 	tmp->number = value;
// 	tmp->next = first;
// 	return tmp;
// }


void add_item(struct item **pcur, const int value)
{
	struct item *tmp;
	tmp = malloc(sizeof(struct item));
	tmp->number = value;
	tmp->next = *pcur;
	*pcur = tmp;
}



int list_sum(struct item *list)
{
	return list ? list->number + list_sum(list->next): 0;
}

void delete_list(struct item *list)
{
	if(list)
	{
		delete_list(list->next);
		free(list);
	}
}

void delete_item(struct item **pcur, int (*condition)(int))
{
	while (*pcur)
	{
		if(condition((*pcur)->number))
		{
			struct item *tmp = *pcur;
			*pcur = (*pcur)->next;
			free(tmp);
		} else
		{
			pcur = &(*pcur)->next;
		}
	}
}

int is_negative(int value) { return value < 0; }
int is_positive(int value) { return value > 0; }
int is_zero(int value) { return value == 0; }
int is_odd(int value) { return value % 2; }