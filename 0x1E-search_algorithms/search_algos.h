#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t l, size_t r);



#endif /*SEARCH_ALGOS*/