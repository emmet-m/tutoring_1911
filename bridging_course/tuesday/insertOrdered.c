/* 
 * insertOrdered.c
 *
 * Inserts an item in order in a list
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int       data;
    struct node *next;
};

struct node * recursive(int item, struct node * list);
struct node * iterative(int item, struct node * list);

int main (void) {
    // Insert into empty list
    struct node * n = recursive(10, NULL);
    // List: 10->X

    n = recursive(15, n);
    // List: 10->15->X

    n = recursive(5, n);
    // List: 5->10->15->X

    // These are very bad tests...
    // TODO: As an exercise, you should turn these into black box tests!
    // You may need to include some extra functions.

    printf("Testing recursive insertion works...\n");
    assert(n->data == 5);
    assert(n->next->data == 10);
    assert(n->next->next->data == 15);
    assert(n->next->next->next == NULL);
    printf("Test passed!\n");

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
    // Empty list or insert at the end of list
    if (list == NULL) {
        struct node * n = malloc(sizeof(struct node));
        n->next = NULL;
        n->data = item;
        return n;
    }
    
    // If current node in list is bigger than 
    // the item to insert... i.e. we need to insert
    // BEFORE current node
    if (list->data > item) {
        struct node * n = malloc(sizeof(struct node));
        n->next = list; // Note here, we connect it to the current level node
        n->data = item;

        // This will be connected to the previous node (if there is one)
        // below.
        return n; 
    }

    // Insert after one of the following nodes, set the next
    // connection of this node to be a recursive call
    list->next = recursive(item, list->next);
    return list;
}
