#include<stdio.h>
#include<stdlib.h>
//A의 범위는 0<=<A<=23
//B의 범위는 0<=B<=59
//C의 범위는 0<=C<=1000

// 전체 분 시간으로 나누기
void calculator(int A, int B, int C) {
	int totalminute= A * 60 + B + C;
	int totalminue_calculator = totalminute % 1440;
	int firstclock =  totalminue_calculator/60;
	int secondclock = totalminue_calculator % 60;

	printf("%d %d",firstclock,secondclock);
}

int main() {
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	calculator(A, B, C);



	return 0;
}
