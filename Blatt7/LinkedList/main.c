#include <stdio.h>

#include <pthread.h>

#include "LinkedList.h"

int main() {

    LinkedList list = linkedList_create();

    linkedList_push_back(&list, 1);
    linkedList_push_back(&list, 2);
    linkedList_push_back(&list, 3);
    linkedList_push_back(&list, 4);

    linkedList_delete(&list, 2);

    int i1;
    linkedList_get(&list, 0, &i1);

    int i2;
    linkedList_get(&list, 1, &i2);

    int i3;
    linkedList_get(&list, 2, &i3);

    return 0;
}