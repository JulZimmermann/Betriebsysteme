//
// Created by julian on 30.01.18.
//

#include "LinkedList.h"

#include <malloc.h>

typedef struct LinkedListNode {
    int value;
    struct LinkedListNode* next;
} LinkedListNode;


LinkedList linkedList_create() {
    LinkedList list;

    list.size = 0;
    list.start = NULL;

    return list;
}

void linkedList_push_back(LinkedList* list, int value) {
    if(list->start == NULL) {
        list->start = (LinkedListNode*) malloc(sizeof(LinkedListNode));
        list->start->value = value;

        list->size++;

        return;
    }

    LinkedListNode* current = list->start;
    while(current->next != NULL) {
        current = current->next;
    }

    current->next = (LinkedListNode*) malloc(sizeof(LinkedListNode));
    current->next->value = value;
    list->size++;
}

bool linkedList_delete(LinkedList* list, int index) {
    if(index < 0 || index > list->size-1) {
        return false;
    }

    LinkedListNode* before = NULL;
    LinkedListNode* current = list->start;

    for(int i = 0; i < index; i++) {
        before = current;
        current = current->next;
    }
    
    before->next = current->next;
    free(current);

    list->size--;

    return true;
}

bool linkedList_get(LinkedList* list, int index, int* value) {
    if(index < 0 || index > list->size-1) {
        return false;
    }

    LinkedListNode* current = list->start;

    for(int i = 0; i < index; i++) {
        current = current->next;
    }

    *value = current->value;
    return true;
}
