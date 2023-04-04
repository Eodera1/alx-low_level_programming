#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = *head;
    listint_t *temp = NULL;
    
    if (current == NULL)
    {
        return -1;
    }
    
    if (index == 0)
    {
        *head = current->next;
        free(current);
        return 1;
    }
    
    while (current != NULL && i < index - 1)
    {
        current = current->next;
        i++;
    }
    
    if (current == NULL || current->next == NULL)
    {
        return -1;
    }
    
    temp = current->next;
    current->next = temp->next;
    free(temp);
    
    return 1;
}
