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

int data(struct node * l) {
    if (l == NULL) {
        fprintf(stderr, "Error, null list passed to data!");
        exit(1);
    }
    return l->data;
}

struct node * delete_first(struct node * head) {
    if (head == NULL) {
        return NULL;
    }

    struct node * tmp = head->next;
    free(head);
    
    return tmp;
}


int main (void) {

    // TODO: Write some tests...
    
    char *powers[] = {"2", "4", "8", "16"};
    struct node *head = strings_to_list(4, powers);

    assert(data(find_min(head)) == data(head));

    assert(length(head) == 4);
    assert(data(head) == 2);
    head = delete_first(head);

    assert(data(find_min(head)) == data(head));

    assert(data(head) == 4);
    head = delete_first(head);

    assert(data(find_min(head)) == data(head));

    assert(data(head) == 8);
    head = delete_first(head);

    assert(data(find_min(head)) == data(head));
    
    assert(data(head) == 16);
    head = delete_first(head);

    assert(is_empty(head));
    assert(find_min(head) == NULL);

    // Merge tests

    char *nums[] = {"1", "4", "7"};
    char *nums2[] = {"2", "6", "8"};
    struct node *list1 = strings_to_list(3, nums);
    struct node *list2 = strings_to_list(3, nums2);
   
    int prevLength = length(list1) + length(list2);

    struct node* result = merge_sortedLists(list1,list2); 

    assert(data(result) == 1);
    assert(length(result) == prevLength);

    while (result != NULL) {
        assert(data(result) == data(find_min(result)));
        result = delete_first(result);
    }


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
    struct node * n = create_node(value, NULL);

    if (list == NULL) {
        return n;
    }

    last(list)->next = n;
        

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
    struct node * curr = list;
    struct node * min = list;
    while (curr != NULL) {
        if (curr->data < min->data) {
            min = curr;
        }
        curr = curr->next;
    }

    return min;
}

int * listToArray(struct node * head, int size) {
    return NULL;
}

struct node *strings_to_list(int len, char *strings[]) {
    if (len <= 0) {
        return NULL;
    }

    struct node * list = NULL;

    int i = 0;
    while (i < len) {
        int tmp = atoi(strings[i]);
        list = append(tmp, list);
        i++;
    }

    return list;
}

struct node * merge_sortedLists(struct node * head1, struct node * head2) {
    struct node * result = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            result = append(head1->data, result);
            head1 = head1->next;
        } else {
            result = append(head2->data, result);
            head2 = head2->next;
        }
    }

    while (head2!=NULL) {
        result = append(head2->data, result);
        head2 = head2->next;
    }
    while (head1!=NULL) {
        result = append(head1->data, result);
        head1 = head1->next;
    }

    return result;
}











