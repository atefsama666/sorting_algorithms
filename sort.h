#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void swapInt(int *array, int pos);

void insertion_sort_list(listint_t **list);
void swapNode(listint_t *node, listint_t *node1);

void selection_sort(int *array, size_t size);
int swapIntS(int *array, int pos1, int pos2);

#endif
