#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer to the head of the linked list.
 * @number: The number to insert.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the new node.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;
	
	new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = number;
		
		if (!node || node->n >= number)
		{
			new->next = node;
			*head = new;
			return (new);
		}
	for (; node && node->next && node->next->n < number; node = node->next);
		
	new->next = node->next;
	node->next = new;
		
	return (new);
}
