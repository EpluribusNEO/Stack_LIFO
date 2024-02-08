#include "stack_lifo.h"

struct stack_lifo{

    int value;
    struct stack_lifo *next;

};


struct stack_lifo* first(int value){
    struct stack_lifo *pv = calloc(1, sizeof(struct stack_lifo*));
    pv->value = value;
    pv->next = 0;
    return pv;
}

void push(struct stack_lifo **top, int value){
    struct stack_lifo *pv = calloc(1, sizeof(struct stack_lifo*));
    pv->value = value;
    pv->next = *top;
    *top = pv;
};

int pop(struct stack_lifo **top){
    int temp = (*top)->value;
    struct stack_lifo *pv = *top;
	*top = (*top)->next;
    free(pv);
	return temp;
};
