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
void printList(const LinkedList* list)
{
    Node* current = list->head;
    while (current != nullptr) 
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
void cleanList(LinkedList* list)
{
    while (list->head != nullptr)
    {
        removeFromFront(list);
    }
}