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
	return s->top == -1;//return

}
int IS_FULL(stack* s) {
	return s->top == ARRAY_SIZE - 1;
	
}//return
int pop(stack* s) {
	if (IS_EMPTY(s)) {
		printf("-1\n");
		return -1;
	}//정수가 없다면
	else {
		int val = s->arr[(s->top)--];
		printf("%d\n", val);
		return val;
	}
		
}
void push(stack* s, int value) {
	if (IS_FULL(s)) {
		return;
	}
	s->arr[++(s->top)] = value;
}
int size(stack* s) {
	printf("%d\n", s->top + 1);
	return s->top + 1;
}
int peek(stack* s) {
	if (IS_EMPTY(s)) {
		printf("-1\n");
		return -1;
	}
	printf("%d\n", s->arr[s->top]);
	return s->arr[s->top];
}
int empty(stack* s) {
	if (IS_EMPTY(s)) {
		printf("1\n");
		return 1;
	}
	else {
		printf("0\n");
		return 0;
	}
}
int main() {
	int N, X,commend;
	stack s;
	init(&s);
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &commend);
		switch (commend) {
		case 1:
			scanf("%d", &X);
			push(&s, X);
			break;

		case 2:
			pop(&s);
			break;
		case 3:
			size(&s);
			break;
		case 4:
			empty(&s);
			break;
		case 5:
			peek(&s);
			break;

		}
		
	}
	return 0;
}
