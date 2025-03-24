1
#include<stdio.h>
2
int caculator(int N,int arr[1001]) {
3
    int result = arr[0];
4
    for (int i = 1; i < N; i++) {
5
​
6
        if (result < arr[i]) {
7
            result = arr[i];
8
        }
9
        else {
10
            continue;
11
        }
12
    }
13
    return result;
14
}
15
int main() {
16
    int N;
17
    int arr[1001];
18
    scanf("%d", &N);
19
    for (int i = 0; i < N; i++) {
20
        scanf("%d", &arr[i]);
21
    }
22
    int M = caculator(N,arr);
23
    float sum = 0;
24
    for (int i = 0; i < N; i++) {
25
        sum+= (arr[i]*100.0)/ M;
26
    }
27
    float everage;
28
​
29
    everage = sum / N;
30
    printf("%.10f", everage);
31
    return 0;
32
}
