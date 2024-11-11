#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
    addToFront(&s->list, element); 
}

int pop(Stack* s)
{
    if (isEmpty(s))
    {
        return -1;  
    }
    int value = s->list.head->data; 
    removeFromFront(&s->list);  
    return value;
}

void initStack(Stack* s)
{
    initList(&s->list); 
}

void cleanStack(Stack* s) 
{
    cleanList(&s->list); 
}

bool isEmpty(Stack* s)
{
    return s->list.head == nullptr; 
}

bool isFull(Stack* s)
{
    return false; 
}
