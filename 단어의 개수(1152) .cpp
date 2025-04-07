#include<stdio.h>
#include<string.h>

#define ARRAY_SIZE 1000000

int main(){
	char arr[ARRAY_SIZE + 1];
	int count = 0;
	if (fgets(arr, sizeof(arr), stdin) == NULL) {
		return 1;
	}
	arr[strcspn(arr, "\n")] = '\0';
	char* token = strtok(arr, " ");
	while (token != NULL) {
		count++;
		token = strtok(NULL, " ");
	}
	printf("%d", count);
	return 0;
}
