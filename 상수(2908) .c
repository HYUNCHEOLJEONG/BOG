#include <stdio.h>
#include <string.h>

int main() {
    int A, B;
    
    // 입력받은 두 수를 그대로 A와 B에 저장
    scanf("%d %d", &A, &B);

    // 각 숫자를 반대로 읽은 값 계산
    int rev_A = (A % 10) * 100 + (A / 10 % 10) * 10 + (A / 100);
    int rev_B = (B % 10) * 100 + (B / 10 % 10) * 10 + (B / 100);

    // 반전된 수 중 더 큰 값 출력
    if (rev_A > rev_B) {
        printf("%d\n", rev_A);
    } else {
        printf("%d\n", rev_B);
    }

    return 0;
}
