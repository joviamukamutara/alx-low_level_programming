#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> d919d71b5a2fdd9c4c4f7e5e7f9632537f7171e0
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
=======
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
>>>>>>> d919d71b5a2fdd9c4c4f7e5e7f9632537f7171e0
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
<<<<<<< HEAD
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

=======
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
>>>>>>> d919d71b5a2fdd9c4c4f7e5e7f9632537f7171e0
    free(new);
    return (0);
}
