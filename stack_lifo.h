#ifndef STACK_LIFO_H_INCLUDED
#define STACK_LIFO_H_INCLUDED

struct stack_lifo;

struct stack_lifo* first(int value);

void push(struct stack_lifo **top, int value);

int pop(struct stack_lifo **top);

#endif // STACK_LIFO_H_INCLUDED
