/*
 * list_questions.c
 *
 * Some neato functions to use with nodes (again)!
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

// new!
struct node * find_min(struct node * list);
int * listToArray(struct node * head, int size);
struct node *strings_to_list(int len, char *strings[]);
struct node * merge_sortedLists(struct node * head1, struct node * head2);


int main (void) {

    // TODO: Write some tests...
    
    return 0;
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

struct node * find_min(struct node * list) {
    // TODO
    return NULL;
}

int * listToArray(struct node * head, int size) {
    return NULL;
}

struct node *strings_to_list(int len, char *strings[]) {
    return NULL;
}

struct node * merge_sortedLists(struct node * head1, struct node * head2) {
    return NULL;
}
