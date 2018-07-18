/*
 * List.h
 *
 * Linked list ADT
 */

#ifndef LIST_H
#define LIST_H

typedef struct node * List;

List list_remove(List l);
int data(List n);
List make_list();
int is_empty(List list);
List create_node(int data, List next);
List insert(int value, List list);
List first(List list);
List last(List list);
List append(int value, List list);
void print_list(List list);
int length(List list);

#endif // LIST_H
