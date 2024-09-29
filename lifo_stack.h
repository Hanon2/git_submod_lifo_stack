/*
==========================================
              Stack Implementation
==========================================
/*
 * queue.h
 * 
 * A simple implementation of a circular buffer LIFO stack.
 *
 * Author: Mohamed Abdelmoneim
 * Date: 09/26/2024
 *
 * This header defines the interface for a fixed-capacity LIFO stack.
 * with push and pop operation.
*/

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdint.h>

#define STACK_CAPACITY 5

typedef struct 
{
    uint8_t buffer[STACK_CAPACITY];     // Store elements
    uint8_t top;                        // Index of the top element (LIFO behavior)
    bool isFull;                        // Tracks if the stack is full
} lifo_stack_t;

/**
 * Initializes the stack, setting it to empty.
 */
void initStack(lifo_stack_t* stack);

/**
 * Check if the stack is full, if so return true.
 */
bool isStackFull(lifo_stack_t* stack);

/**
 * Check if the stack is full, if so return false.
 */
bool isStackEmpty(lifo_stack_t* stack);

/**
 * Pushes a data element onto the stack.
 * Returns true if successful, false if the stack is full.
 */
bool push(lifo_stack_t* stack, uint8_t data);

/**
 * Pops a data element from the stack.
 * Returns true if successful, false if the stack is empty.
 */
bool pop(lifo_stack_t* stack, uint8_t* data);

#endif
