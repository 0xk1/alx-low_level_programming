#include "lists.h"



size_t print_list(const list_t *h)
{
		int i = 0;
		list_t const *curr = h;

		while (curr)
		{
				if (curr->str)
				{
						printf("[%d] %s\n", curr->len, curr->str);
				}
				else
				{
						printf("[%c] %s\n", '0', "(nil)");
				}
				curr = curr->next;
		}
		return (i);
}
