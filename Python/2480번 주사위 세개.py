def solution(a, b, c):
    if a == b == c:
        return 10000 + a * 1000
    elif a == b or a == c:
        return 1000 + a * 100
    elif b == c:
        return 1000 + b * 100
    else:
        return max(a, b, c) * 100

def main():
    a, b, c = map(int, input().split())
    print(solution(a, b, c))

if __name__ == "__main__":
    main()
