#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


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
size_t list_len(const list_t *h);
int _strlen(const char *str);
list_t *add_node(list_t **head, const char *str);

#endif