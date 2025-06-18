
#include<stdio.h>

int caculator(int N,int arr[1001]) {

    int result = arr[0];

    for (int i = 1; i < N; i++) {



        if (result < arr[i]) {

            result = arr[i];

        }

        else {

            continue;

        }

    }

    return result;

}

int main() {

    int N;

    int arr[1001];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf("%d", &arr[i]);

    }

    int M = caculator(N,arr);

    float sum = 0;

    for (int i = 0; i < N; i++) {

        sum+= (arr[i]*100.0)/ M;

    }

    float everage;


    everage = sum / N;

    printf("%.10f", everage);

    return 0;

}
