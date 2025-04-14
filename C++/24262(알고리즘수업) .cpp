#include <iostream>
#include <vector>
using namespace std;

int MenOfPassion(vector<int>& A, int n) {
    int i = n / 2;
    return A[i]; // 코드1
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n, 0); // 아무 값으로 초기화해도 무방

    MenOfPassion(A, n); // 실제 리턴값은 중요하지 않음
    cout << 1 << endl;  // 코드1 수행 횟수
    cout << 0 << endl;  // 최고차항 차수
    return 0;
}