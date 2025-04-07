#include<stdio.h>

#define ARRAY_SIZE 30

int main() {
    int arr[ARRAY_SIZE];
    int second[ARRAY_SIZE];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }

    for (int i = 0; i < 10; i++) {
        int isunique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == second[j]) {
                isunique = 0;
                break;
            }
        }
        if (isunique == 1) {
            second[count] = arr[i];
            count++;
        }
    }
    printf("%d\n", count);
}
