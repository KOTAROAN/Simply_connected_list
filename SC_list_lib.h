#ifndef SMART_LIST_LIB_H_SENTRY
#define SMART_LIST_LIB_H_SENTRY

struct item
	{
		int number;
		struct item *next;
	};


struct item *list_init(const int *arr, const int arr_size);
struct item *add_item(struct item *first, int value);
void print_list(const struct item *first);
void delete_item(struct item *first, int condition());
#endif
