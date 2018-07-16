/*
 * node_array.c
 *
 * What does this code print?
 */


#include <stdio.h>
#include <stdlib.h>

struct node {
    int       data;
    struct node *next;
};

struct node * list_append(struct node * list1, struct node *  list2);

int main () {
    int i;
    struct node *a[100];
    struct node *b = malloc(sizeof (struct node));
    b->data = 0;
    for (i = 0; i < 100; i = i + 1)
        a[i] = b;
    for (i = 0; i < 100; i = i + 1)
        a[i]->data++;
    printf("%d %d\n", a[0]->data, a[99]->data);

    return EXIT_SUCCESS;
}
