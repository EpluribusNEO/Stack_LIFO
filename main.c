#include <stdio.h>
#include <stdlib.h>
#include "stack_lifo.h"



int main()
{
    int getNumber();

    int count;
    printf("elements of the stack >:");
    count = getNumber();

	struct stack_lifo *top = calloc(1, sizeof(struct stack_lifo*));

	top = first(getNumber());
	for(int i = 0; i < count-1; i++){
		push(&top, getNumber());
	}

	while(top){
		printf("\n%d", pop(&top));
	}

    return 0;
}

int getNumber(){
    int num;
    scanf("%d", &num);
    return num;
}
