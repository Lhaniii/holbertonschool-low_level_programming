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
	list_t *tmp = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if(tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
