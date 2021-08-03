#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef struct 
{
    int list[100];
    int first;
    int last;
} Queue;

Queue create();

void enqueue(Queue *myQueue, int value);

int dequeue(Queue *myQueue);

int isClear(Queue cloneQueue);

int first(Queue cloneQueue);