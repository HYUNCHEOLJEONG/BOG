
1
#include<stdio.h>
2
int main() {
3
    int A, B, C;
4
    scanf("%d", &A);
5
    scanf("%d", &B);
6
    scanf("%d", &C);
7
    printf("%d\n", (A + B) % C);
8
    printf("%d\n", ((A % C) + (B % C)) % C);
9
    printf("%d\n", (A*B) % C);
10
    printf("%d\n", ((A % C) * (B % C)) % C);
11
}
12
​
