#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle in it.
 * @list: Pointer to the beginning of the list
 *
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	/* Declare pointers for slow and fast traversal */
	listint_t *slow, *fast;

	/* Check for empty list or a list with only one node */
	if (list == NULL || list->next == NULL)
		return (0);

	/* Initialize pointers */
	slow = list;
	fast = list->next;

	/* Traverse the list with two pointers, one moving at double the speed */
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		/* Check if the two pointers meet, indicating a cycle */
		if (slow == fast)
			return (1);

		/* Move slow pointer one step at a time */
		slow = slow->next;

		/* Move fast pointer two steps at a time */
		fast = fast->next->next;
	}

	/* No cycle found */
	return (0);
}
