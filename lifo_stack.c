#include "lifo_stack.h"

void initStack(lifo_stack_t* stack)
{
    stack->isFull = false;
    stack->top = 0;
}

bool isStackFull(lifo_stack_t* stack)
{
    return stack->isFull;
}

bool isStackEmpty(lifo_stack_t* stack)
{
    return (stack->top == 0);
}

bool push(lifo_stack_t* stack, uint8_t data)
{
    if (isStackFull(stack))
        return false;

    stack->buffer[stack->top] = data;
    stack->top++;
    
    if (stack->top == STACK_CAPACITY)
        stack->isFull = true;
    return true;
}

bool pop(lifo_stack_t* stack, uint8_t* data)
{
   if (isStackEmpty(stack))
        return false;
    stack->top--;
    *data = stack->buffer[stack->top];
    stack->isFull = false;
    return true;
}
