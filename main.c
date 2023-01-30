#include <stdio.h>
#include "D:\Code\Tasks\Simply_connected_list\SC_list_lib.h"
#include "D:\Code\Tasks\Simply_connected_list\SC_list_lib.c"


int main(void)
{
	int init_arr[] = {2, 4, 6, 8, 4, 6, 8, 8, 1000, -46};
	struct item *my_list;
	my_list = list_init(init_arr, sizeof(init_arr)/sizeof(*init_arr));
	print_list(my_list);
	my_list = add_item(my_list, -100);
	my_list = add_item(my_list, 34);
	my_list = add_item(my_list, -57);
	print_list(my_list);
	return 0;
}
