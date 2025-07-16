#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, N, a, b;
    vector<int> results;

    cin >> X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        results.push_back(a * b);
    }

    int sum = 0;
    for (int pointer : results) {
        sum += pointer;
    }

    if (sum == X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
