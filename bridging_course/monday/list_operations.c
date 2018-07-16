/*
 * list_operations.c
 *
 * Some neato functions to use with nodes!
 */


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

typedef struct node * Node;

struct node {
    int       data;
    struct node *next;
};

int is_empty(struct node * list);
struct node * create_node(int data, struct node * next);
struct node * insert(int value, struct node * list);
struct node *first(struct node * list);
struct node *last(struct node * list);
struct node * append(int value, struct node * list);
void print_list(struct node * list);
int length(struct node * list);


int main (void) {

    Node n = NULL;

    // is_empty
    assert(is_empty(n));
    // TODO: Come back to this...
    //assert(length(n) == 0);

    // insert, create_node
    n = insert(1,n);
    assert(!is_empty(n));
    assert(length(n) == 1);

    // first
    assert(first(n) == n);

    // last
    assert(last(n) == n);

    n = insert(2,n);
    assert(length(n) == 2);

    // Check works on bigger lists
    assert(last(n) != n);
    assert(first(n) == n);
    assert(last(n)->next == NULL);

    // Check data is preserved
    assert(last(n)->data == 1);
    assert(first(n)->data == 2);

    n = insert(3,n);
    assert(length(n) == 3);

    // Bigger list!
    assert(last(n)->data == 1);
    assert(first(n)->data == 3);

    // append
    n = append(0,n);
    assert(length(n) == 4);
    assert(first(n)->data == 3);
    assert(last(n)->data == 0);
    assert(last(n)->next == NULL);

    // print_list; Should print "3->2->1->0"
    print_list(n);

    assert(length(n) == 4);

    return EXIT_SUCCESS;
}

/*
 * return 1 iff list contains no elements, 0 otherwise
 */
int is_empty(struct node * list) {
    return FALSE;
}

/*
 * create a struct node and place the specified values in the fields
 */
struct node * create_node(int data, struct node * next) {
    return NULL;

}

/*
 * insert integer at front of list
 */
struct node * insert(int value, struct node * list) {
    return NULL;

}

/*
 * return number of nodes in list
 */
int length(struct node * list) {
    return -1;
}

/*
 * return pointer to first node in list
 * NULL is returned if list is empty
 */
struct node *first(struct node * list) {
    return NULL;

}

/*
 * return pointer to last node in list
 * NULL is returned if list is empty
 */
struct node *last(struct node * list) {
    return NULL;
}

/*
 * append integer to end of list
 */
struct node * append(int value, struct node * list) {
    return NULL;
}

/*
 * print contents of list
 * e.g: [11, 12, 13, 42, 24]
 */
void print_list(struct node * list) {
}
