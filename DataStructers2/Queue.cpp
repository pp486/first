#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void initQueue(Queue* q, unsigned int size)
{
    q->elements = (unsigned int*)malloc(size * sizeof(unsigned int));
    q->head = 0;
    q->tail = 0;
    q->currentSize = 0;
}
void cleanQueue(Queue* q) 
{
    free(q->elements);
    q->elements = NULL;
    q->head = 0;
    q->tail = 0;
    q->currentSize = 0;
}
void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q)) 
    {
        printf("Queue is full, cannot enqueue %u\n", newValue);
        return;
    }
    q->elements[q->tail] = newValue;
    q->tail = (q->tail + 1) % q->size; 
    q->currentSize++;
}
int dequeue(Queue* q)
{
    if (isEmpty(q)) 
    {
        printf("Queue is empty, cannot dequeue\n");
        return -1; 
    }
    int value = q->elements[q->head];
    q->head = (q->head + 1) % q->size; 
    q->currentSize--;
    return value;
}
bool isEmpty(Queue* s) 
{
    return s->currentSize == 0;
}
bool isFull(Queue* s) 
{
    return s->currentSize == s->size;
}

