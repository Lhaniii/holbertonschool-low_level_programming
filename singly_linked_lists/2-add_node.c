#include "lists.h"

/**
 * add_node - Adds new node
 *
 * @head: the og list
 *
 * @str: str to add node
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
	temp->str = strdup(str);	
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
	}

	return (NULL);
}
