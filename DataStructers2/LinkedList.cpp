#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
    list->head = nullptr;
}
void addToFront(LinkedList* list, int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}
void removeFromFront(LinkedList* list) 
{
    if (list->head == nullptr) {
        std::cout << "The list is empty, cannot remove element." << std::endl;
        return;
    }
    Node* temp = list->head;
    list->head = list->head->next;
    delete temp;
}
