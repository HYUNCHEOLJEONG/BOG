#include<stdio.h>

#define ARRAY_SIZE 1000000000

void calculator(int A, int B) {
    int sum = A % 10;
    int symbol;
    int pattern[10][4] = {
        {0, 0, 0, 0}, {1, 1, 1, 1}, {2, 4, 8, 6}, {3, 9, 7, 1}, {4, 6, 4, 6},
        {5, 5, 5, 5}, {6, 6, 6, 6}, {7, 9, 3, 1}, {8, 4, 2, 6}, {9, 1, 9, 1}
    };
    symbol = pattern[sum][(B - 1) % 4];
    switch (symbol) {
        case 1: printf("1\n", symbol); break;
        case 2: printf("2\n", symbol); break;
        case 3: printf("3\n", symbol); break;
        case 4: printf("4\n", symbol); break;
        case 5: printf("5\n", symbol); break;
        case 6: printf("6\n", symbol); break;
        case 7: printf("7\n", symbol); break;
        case 8: printf("8\n", symbol); break;
        case 9: printf("9\n", symbol); break;
        case 0: printf("10\n", symbol); break;
    }
}

int main() {
    int a, b, T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        calculator(a, b);
    }
    return 0;
}
