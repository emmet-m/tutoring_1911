/* 
 * insertOrdered.c
 *
 * Inserts an item in order in a list
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int       data;
    struct node *next;
};

int main (void) {
    struct node * n = malloc(sizeof(struct node));
    struct node * m = malloc(sizeof(struct node));
    struct node * k = malloc(sizeof(struct node));

    n->next = m;
    m->next = k;
    k->next = NULL;

    n->data = 10;
    m->data = 5;
    k->data = 0;


    return EXIT_SUCCESS;
}

struct node * iterative(int item, struct node * list) {
    struct node * n = malloc(sizeof(struct node));
    n->next = NULL;
    n->data = item;

    if (list == NULL) {
        return n;
    }

    struct node * curr = list;

    if (item > curr->data) {
        n->next = list;
        return n;
    }

    while (curr->next != NULL && item > curr->next->data) {
        curr = curr->next;
    }

    struct node * tmp = curr->next;
    curr->next = n;
    n->next = tmp;

    return list;
}

struct node * recursive(int item, struct node * list) {
    return NULL;
}
