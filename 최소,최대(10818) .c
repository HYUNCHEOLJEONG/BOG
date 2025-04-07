#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//N의 최대 개수는 1이상 1,000,000
//모든 정수는 int형의 범위
#define ARRAY_SIZE 1000000
typedef struct Area {
	int top;
	int arr[ARRAY_SIZE];
}Area;

int MAX(Area* a,int N) {
	int result = a->arr[0];
	for (int i = 1; i < N; i++) {
		if (result < a->arr[i]) {
			result = a->arr[i];
		}
		
	}
	return result;
}
int MIN(Area* a,int N){
	int result = a->arr[0];
	for (int i = 1; i < N; i++) {
		if (result > a->arr[i]) {
			result = a->arr[i];
		}
		
	}
	return result;

	}



int main() {
	int N, Max, min;
	Area P;
	scanf("%d", &N);
	for (int i = 0; i <N; i++) {
		scanf("%d ",&P.arr[i],sizeof(int));
	}

	Max=MAX(&P,N);
	min=MIN(&P,N);
	printf("%d %d\n",min,Max);
	return 0;
}
