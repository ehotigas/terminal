#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    void *value;
    struct ListNode *next;
};

struct ListNode *initNode(void *value, struct ListNode *nextNode) {
    struct ListNode *newNode = malloc(sizeof(struct ListNode *));
    newNode->value = value;
    newNode->next = nextNode;
    return newNode;
}

struct List {
    struct ListNode *firstNode;
    int lenght;
};

struct List *initList() {
    struct List *list = malloc(sizeof(struct List *));
    list->lenght = 0;
    list->firstNode = NULL;
}

void add(void *value, struct List *list) {
    struct ListNode *newNode = initNode(value, NULL);
    list->lenght++;

    if (list->firstNode == NULL) {
        list->firstNode = newNode;
        return;
    }

    struct ListNode *lastNode = list->firstNode;
    while (1) {
        if (lastNode->next == NULL) {
            lastNode->next = newNode;
            break;
        }
        lastNode = lastNode->next;
    }
}

struct ListNode *get(int index, struct List *list) {
    if ((index >= 0 && index >= list->lenght) || (index < 0 && index < list->lenght)) {
        return;
    }
    int absIndex = index >= 0 ? index : index + list->lenght;
    struct ListNode *node = list->firstNode;
    for (int listIndex = 0; listIndex < index; listIndex++) {
        node = node->next;
    }
    return node;
}

void remove(int index, struct List *list) {
    if ((index >= 0 && index >= list->lenght) || (index < 0 && index < list->lenght)) {
        return;
    }
    struct ListNode *node = list, *previous = NULL, *next = NULL;
    
}
