#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;

    while (N--) {
        string s;
        cin >> s;

        vector<bool> seen(26, false); // 알파벳 사용 여부
        bool is_group = true;

        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == s[i-1]) continue;

            if (seen[s[i] - 'a']) {
                is_group = false;
                break;
            }

            seen[s[i] - 'a'] = true;
        }

        if (is_group) count++;
    }

    cout << count << endl;
    return 0;
}


