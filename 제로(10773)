#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE 1000000
typedef struct stack {
	int top;
	int arr[ARRAY_SIZE];
}stack;
void init(stack* s) {
	s->top = -1;
}
int IS_EMPTY(stack* s) {
	return s->top == -1;
}
int IS_FULL(stack* s) {
	return s->top == ARRAY_SIZE - 1;
}
int pop(stack* s) {
	if (IS_EMPTY(s)) {
		return -1;
	}
	else {
		return s->arr[(s->top)--];
	}
}
void push(stack* s, int value) {
	if (IS_FULL(s)) {
		return;
	}
	else {
		s->arr[++(s->top)] = value;
	}
}
int peek(stack* s, int val) {
	if (val == 0) {
		return pop(s);
	}
	else {
		push(s, val);
		return val;
	}
}
int calcular(stack* s) {
	int sum = 0;
	for (int i = 0; i <= s->top; i++) {
		sum += s->arr[i];
	}
	return sum;
}


int main() {
	int K, T;
	stack s;
	init(&s);
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &T,ARRAY_SIZE+1);
		peek(&s, T);
	}
	printf("%d\n", calcular(&s));

	return 0;
}
