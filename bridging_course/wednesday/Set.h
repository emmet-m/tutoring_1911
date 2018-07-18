/*
 * Set.h
 *
 * The interface to a set ADT
 *
 */

typedef struct set * Set;

Set setCreate();

Set setAdd(int item, Set s);

Set setRemove(int item, Set s);

int setIsMember(int item, Set s);

void setDestroy(Set s);
