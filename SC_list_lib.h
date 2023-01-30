#ifndef SMART_LIST_LIB_H_SENTRY
#define SMART_LIST_LIB_H_SENTRY

struct item
	{
		int number;
		struct item *next;
	};


struct item *list_init(const int *arr, const int arr_size);
/*struct item *add_item(struct item *first, int value);*/
void add_item(struct item **pcur, const int value);
int list_sum(struct item *list);
void print_list(const struct item *first);
void delete_item(struct item **pcur, int (*condition)(int));
void delete_list(struct item *list);

int is_negative(int);
int is_positive(int);
int is_zero(int);
int is_odd(int);
#endif
