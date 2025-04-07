#include<stdio.h>
2
int main() {
3
    int A, B;
4
    scanf("%d %d",&A,&B);
5
    
6
    if (A > B) {
7
        printf(">");
8
    }
9
    else if (A < B) {
10
        printf("<");
11
    }
12
    else if(A == B) {
13
        printf("==");
14
    }
15
    return 0;
16
}
