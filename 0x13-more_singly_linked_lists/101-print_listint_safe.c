#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    int found_cycle = 0;
    size_t count = 0;
    
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
        {
            found_cycle = 1;
            break;
        }
    }
    
    if (found_cycle)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        
        while (head != slow)
        {
            printf("[%p] %d\n", (void *)head->next, head->next->n);
            count++;
            head = head->next;
        }
        
        printf("-> [%p] %d\n", (void *)slow, slow->n);
        count++;
    }
    else
    {
        while (head != NULL)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            count++;
            head = head->next;
        }
    }
    
    if (fflush(stdout) == EOF)
    {
        exit(98);
    }
    
    return count;
}
