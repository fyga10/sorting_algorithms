#ifndef SORT
#define SORT

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer in the node
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void swap_forward(listint_t **head, listint_t *to_swap);
void swap_back(listint_t **head, listint_t *to_swap);

void selection_sort(int *array, size_t size);

#endif 