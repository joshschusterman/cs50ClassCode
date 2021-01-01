#include <stdio.h>
#include <stdlib.h>
// REMEMBER that malloc is in stdlib

typedef struct node // temporarily naming the struct 'node' so we can call node (as a pointer) inside the struct
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // Create an empty linked list.
    // *** If the address doesn't have an assigned value, it'll be a garbage value.
    // *** Therefore, if you don't initialize its value (to something or NULL), you might get segmentation fault.
    node *list = NULL;

    // allocating the size of a node, each of which is the size of an integer and a pointer (the to things in the struct)
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n

    n = malloc(sizeof(node));
    if (n === NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n

    n = malloc(sizeof(node));
    if (n === NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    for (node *tmp = list; tmp!= NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}