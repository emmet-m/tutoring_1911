/* 
 * delete.c
 *
 * Deletes a given node from a list.
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int       data;
    struct node *next;
};

int iterative(int item, struct node * head) {

    while (head != NULL) {
        if (item == head->data) {
            return 1;
        }
        head = head->next;
    }

    return 0;
}

int recursive(int item, struct node * head) {
    if (head == NULL) {
        return 0;
    }
    
    if (head->data == item) {
        return 1;
    }

    return recursive(item, head->next);
}

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

    scanf("%d", &k->data);

    printf("i: %d\n", iterative(0, n));
    printf("r: %d\n", recursive(0, n));

    return EXIT_SUCCESS;
}

