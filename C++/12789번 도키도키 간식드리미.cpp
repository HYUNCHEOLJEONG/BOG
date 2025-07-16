#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

// 문제를 해결하는 함수
vector<string> solution(int N, vector<int> People_numbering) {
    queue<int> Present_line;         // 현재 줄 (입력 그대로)
    stack<int> Rest_line;           // 임시 대기 스택
    vector<string> Answer;         // 결과 저장 ("Nice" or "Sad")

    int pos = 1;  // 현재 받아야 하는 학생 번호

    // Present_line에 번호를 모두 집어넣음 (사실상 사용하지 않지만, 당신 스타일 살림)
    for (int num : People_numbering) {
        Present_line.push(num);
    }

    // 현재 줄을 순서대로 확인
    for (int i = 0; i < N; i++) {
        int current = People_numbering[i];

        if (current == pos) {
            // 현재 번호가 순서(pos)와 맞으면 바로 진행
            pos++;
        } else {
            // Rest_line의 top이 pos와 맞으면 꺼내고 진행
            while (!Rest_line.empty() && Rest_line.top() == pos) {
                Rest_line.pop();
                pos++;
            }

            if (current != pos) {
                // 아직 순서가 아니면 Rest_line에 넣음
                Rest_line.push(current);
            } else {
                // 현재 번호가 pos라면 진행
                pos++;
            }
        }
    }

    // 남은 Rest_line을 검사
    while (!Rest_line.empty()) {
        if (Rest_line.top() == pos) {
            Rest_line.pop();
            pos++;
        } else {
            Answer.push_back("Sad");
            return Answer;
        }
    }

    Answer.push_back("Nice");
    return Answer;
}

int main() {
    int N;
    cin >> N;

    string Question_number;  // 한 줄에 입력된 학생 번호 문자열
    cin.ignore();            // 버퍼 비우기
    getline(cin, Question_number);

    stringstream ss(Question_number);
    vector<int> numbering_member;

    int num;
    while (ss >> num) {
        numbering_member.push_back(num);
    }

    // 결과를 받아 출력
    vector<string> Answer = solution(N, numbering_member);

    for (string ans : Answer) {
        cout << ans << endl;
    }

    return 0;
}
