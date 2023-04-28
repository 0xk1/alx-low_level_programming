#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - linked list
 * @str: string
 * @len: len of the string
 * @next: next
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
