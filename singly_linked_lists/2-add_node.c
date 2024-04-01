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
	list_t *temp = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free (temp);
		return(NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
