#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<pair<int, char>> alphabet(26);
    string word;
    cin >> word;

    // 알파벳 빈도 계산
    for (char c : word) {
        c = toupper(c);
        int idx = c - 'A';
        alphabet[idx].first++;
        alphabet[idx].second = c;
    }

    vector<pair<int, char>> answer(1); // 항상 한 개만 유지
    int maxcount = 0;
    bool duplicate = false;

    for (int i = 0; i < 26; i++) {
        if (alphabet[i].first > maxcount) {
            maxcount = alphabet[i].first;
            answer[0] = { alphabet[i].first, alphabet[i].second }; // 덮어쓰기
            duplicate = false;
        }
        else if (alphabet[i].first == maxcount && alphabet[i].first != 0) {
            duplicate = true;
        }
    }

    if (duplicate) cout << '?';
    else cout << answer[0].second;

    return 0;
}
