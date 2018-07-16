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
    assert(length(n) == 0);

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

    // ppend
    n = append(0,n);
    assert(length(n) == 4);
    assert(first(n)->data == 3);
    assert(last(n)->data == 0);
    assert(last(n)->next == NULL);

    // print_list; Should print "3->2->1->0"
    print_list(n);

    assert(length(n) == 4);


    // TODO: write some tests for list_append!!!


    return EXIT_SUCCESS;
}

/*
 * return 1 iff list contains no elements, 0 otherwise
 */
int is_empty(struct node * list) {
    if (list == NULL) {
        return TRUE;
    }

    return FALSE;
}

/*
 * create a struct node and place the specified values in the fields
 */
struct node * create_node(int data, struct node * next) {
    struct node * newNode;

    newNode = malloc(sizeof(struct node));

    if (newNode == NULL) {
        fprintf(stderr, "Malloc failed when creating new node!\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->next = next;

    return newNode;
}

/*
 * insert integer at front of list
 */
struct node * insert(int value, struct node * list) {
    return create_node(value, list);
}

/*
 * return number of nodes in list
 */
int length(struct node * list) {
    int i = 0;

    struct node * n = list;

    while (n != NULL) {
        n = n->next;
        ++i;
    }

    return i;
}

/*
 * return pointer to first node in list
 * NULL is returned if list is empty
 */
struct node *first(struct node * list) {
    return list;
}

/*
 * return pointer to last node in list
 * NULL is returned if list is empty
 */
struct node *last(struct node * list) {
    if (is_empty(list)) {
        return NULL;
    }

    struct node * last = list;

    while (last->next != NULL) {
        last = last->next;
    }

    return last;
}

/*
 * append integer to end of list
 */
struct node * append(int value, struct node * list) {
    last(list)->next = create_node(value, NULL);

    return list;
}

/*
 * print contents of list
 * e.g: [11, 12, 13, 42, 24]
 */
void print_list(struct node * list) {
    struct node * n = list;

    while (n != NULL) {
        printf("%d", n->data);
        if (n->next != NULL) {
            printf("->");
        }
        n = n->next;
    }

    printf("\n");
}


/*
 * combines two lists together, sticking list2 on the end of list1
 * 
 * e.g:
 *  list1 == 1->2->3
 *  list2 == 4->5->6
 *
 *  list_append(list1, list2) == 1->2->3->4->5->6
 */
struct node * list_append(struct node * list1, struct node *  list2) {
    last(list1)->next = list2;
    return list1;
}
