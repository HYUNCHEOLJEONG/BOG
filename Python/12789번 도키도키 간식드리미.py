from collections import deque

def solution(N, People_numbering):
    Present_line = deque(People_numbering)   # 현재 줄
    Rest_line = []                           # 임시 대기 스택

    pos = 1  # 현재 받아야 하는 학생 번호

    for current in People_numbering:
        if current == pos:
            pos += 1
        else:
            while Rest_line and Rest_line[-1] == pos:
                Rest_line.pop()
                pos += 1

            if current != pos:
                Rest_line.append(current)
            else:
                pos += 1

    while Rest_line:
        if Rest_line[-1] == pos:
            Rest_line.pop()
            pos += 1
        else:
            return ["Sad"]

    return ["Nice"]


if __name__ == "__main__":
    N = int(input())
    question_number = list(map(int, input().split()))

    answer = solution(N, question_number)

    for ans in answer:
        print(ans)


