

typedef struct stack Stack;

Stack *stackCreate(int size);
void stackFree(Stack *stack);
void stackPush(Stack *stack, int value);
int stackPop(Stack *stack);
int stackPeek(Stack *stack, int index);
int stackTop(Stack *stack);
int stackIsEmpty(Stack *stack);
int stackIsFull(Stack *stack);


