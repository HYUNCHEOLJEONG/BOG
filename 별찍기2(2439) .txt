#include<stdio.h>
#include<stdlib.h>
#define ARRAY_SIZE 100
typedef struct stack {
	char top = '*';
	char arr[ARRAY_SIZE + 1];
}stack;

void push(stack* s, int value) {
	for (int j = 1; j <= value; j++) {
        for (int i = 1; i <= value - j; i++) {
			printf(" ");
		}
		for (int k = 1; k <=j; k++) {
			printf("*");
		}
		printf("\n");
	}

}

int main() {
	stack p;
	int N;
	scanf("%d", &N);
	push(&p, N);

}
