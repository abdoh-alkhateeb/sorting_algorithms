#ifndef _SORT_H_
#define _SORT_H_

#include <stddef.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node.
 *
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *, size_t);
void print_list(const listint_t *);
void bubble_sort(int *, size_t);
void selection_sort(int *, size_t);
void quick_sort(int *, size_t);
void insertion_sort_list(listint_t **);

#endif /* _SORT_H_ */
