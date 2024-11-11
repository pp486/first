#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList 
{
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void addToFront(LinkedList* list, int value);
void removeFromFront(LinkedList* list);
void printList(const LinkedList* list);
void cleanList(LinkedList* list);

#endif 
