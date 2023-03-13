typedef struct queue Queue;

Queue* queueCreate(int size);
void queueFree(Queue* queue);
void queueEnqueue(Queue* queue,int value);
int queueDequeue(Queue* queue);
int queueFirst(Queue* queue);
int queueLast(Queue* queue);
int queueIsEmpty(Queue* queue);
int queueIsFull(Queue* queue);
