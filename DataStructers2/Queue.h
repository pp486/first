#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
/* a queue contains positive integer values. */
typedef struct Queue
{
    unsigned int* elements;     
    unsigned int size;          
    unsigned int head;         
    unsigned int tail;        
    unsigned int currentSize;
    unsigned int newValue;
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */