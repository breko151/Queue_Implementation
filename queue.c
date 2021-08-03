#include "queue.h"

Queue create() 
{
    Queue newQueue;
    newQueue.first = 1;
    newQueue.last = 0;
    return newQueue;
}

void enqueue(Queue *myQueue, int value) 
{
    myQueue->list[myQueue->last] = value;
    myQueue->last++;
}


int isEmpty(Queue cloneQueue)
{
    if(cloneQueue.last + 1 == cloneQueue.first) 
    {
        return 1;
    }
    return 0;
}

int dequeue(Queue *myQueue) 
{
    if(isEmpty(*myQueue))  
    {
        printf("\nError");
        return -1;
    }
    else 
    {
        int returnValue = 0;
        returnValue = myQueue->list[myQueue->first - 1];
        myQueue->first++;
        if(isEmpty(*myQueue)) 
        {
            *myQueue = create();
        }
        return returnValue;
    }
}

int first(Queue clonQueue)
{
    if(isEmpty(clonQueue)) 
    {
        printf("\nError");
        return -1;
    }
    else 
    {
        return clonQueue.list[clonQueue.first - 1];
    }
}