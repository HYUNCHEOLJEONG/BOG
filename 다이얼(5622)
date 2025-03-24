#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE 15

int calcular(char arr2[ARRAY_SIZE]) {
	char* dial[8] = {
		 "ABC", "DEF", "GHI", "JKL", "MNO",
		"PQRS", "TUV", "WXYZ"

	};
	int length = strlen(arr2);
	int sum = 0;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < 8; j++) {
			if (strchr(dial[j],arr2[i])) {
				sum+=(j+3);
				break;
			}
		}
	
	}

   return sum;
}

int main() {
	char arr2[ARRAY_SIZE];
	scanf("%s", arr2);
	printf("%d",calcular(arr2));

	return 0;
}
