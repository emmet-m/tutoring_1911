/*
 * List.c
 *
 * A linked List ADT
 */


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

#define TRUE 1
#define FALSE 0

struct node {
    int       data;
    List next;
};

static List create_node(int data, List next);

List make_list() {
    return NULL; // They will never know
}

List list_remove(List l) {
    if (l == NULL) return NULL;
    List tmp = l->next;
    free(l);
    return tmp;
}

int data(List n) {
    if (n == NULL) {
        printf("NULL list passed to data; not working\n");
        exit(1);
    }
    return n->data;
}

/*
 * return 1 iff list contains no elements, 0 otherwise
 */
int is_empty(List list) {
    if (list == NULL) {
        return TRUE;
    }

    return FALSE;
}

/*
 * create a struct node and place the specified values in the fields
 */
static List create_node(int data, List next) {
    List newNode;

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
List insert(int value, List list) {
    return create_node(value, list);
}

/*
 * return number of nodes in list
 */
int length(List list) {
    int i = 0;

    List n = list;

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
List first(List list) {
    return list;
}

/*
 * return pointer to last node in list
 * NULL is returned if list is empty
 */
List last(List list) {
    if (is_empty(list)) {
        return NULL;
    }

    List last = list;

    while (last->next != NULL) {
        last = last->next;
    }

    return last;
}

/*
 * append integer to end of list
 */
List append(int value, List list) {
    last(list)->next = create_node(value, NULL);

    return list;
}

/*
 * print contents of list
 * e.g: [11, 12, 13, 42, 24]
 */
void print_list(List list) {
    List n = list;

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
List list_append(List list1, List  list2) {
    last(list1)->next = list2;
    return list1;
}
