#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly-linked list of integers in ascending
 * order using the Insertion Sort algorithm.
 *
 * @list: Double pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	if (list != NULL && *list != NULL && (*list)->next != NULL)
	{
		listint_t *p, *q, *s, *t;
		bool prev_null;

		for (p = (*list)->next; p != NULL; p = p->next)
			for (q = p; q->prev != NULL && q->prev->n > q->n; q = q->prev)
			{
				prev_null = false;

				s = q->prev;
				t = q;

				if (s->prev != NULL)
					s->prev->next = t;
				else
					prev_null = true;

				if (t->next != NULL)
					t->next->prev = s;

				s->next = t->next;
				t->prev = s->prev;

				s->prev = t;
				t->next = s;

				q = s;

				if (prev_null == true)
					*list = t;

				print_list(*list);
			}
	}
}
