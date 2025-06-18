#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int maxWidth = 2 * number - 1; // 별 개수의 최대 길이 (가장 넓은 줄)

    // 윗부분 (포함)
    for (int i = 1; i <= number; i++) {
        int spaceCount = number - i;         // 좌측 공백 개수
        int starCount = 2 * i - 1;           // 별 개수

        // 공백 출력
        for (int j = 0; j < spaceCount; j++) {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < starCount; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    // 아랫부분 (윗부분 제외)
    for (int i = number - 1; i >= 1; i--) {
        int spaceCount = number - i;
        int starCount = 2 * i - 1;

        // 공백 출력
        for (int j = 0; j < spaceCount; j++) {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < starCount; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
