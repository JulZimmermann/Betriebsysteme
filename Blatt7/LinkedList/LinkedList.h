//
// Created by julian on 30.01.18.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stdbool.h>

typedef struct LinkedListNode LinkedListNode;

typedef struct LinkedList {
    LinkedListNode* start;
    int size;
} LinkedList;

LinkedList linkedList_create();

void linkedList_push_back(LinkedList* list, int value);
bool linkedList_delete(LinkedList* list, int index);
bool linkedList_get(LinkedList* list, int index, int* value);

#endif //LINKEDLIST_LINKEDLIST_H
