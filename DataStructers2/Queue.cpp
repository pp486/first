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

