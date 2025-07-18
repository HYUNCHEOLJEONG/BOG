def main():
    N = int(input())
    paper = [[0]*101 for _ in range(101)]

    for _ in range(N):
        x, y = map(int, input().split())
        for i in range(x, x+10):
            for j in range(y, y+10):
                paper[i][j] += 1

    total = 0
    overlap = 0

    for i in range(101):
        for j in range(101):
            if paper[i][j] >= 1:
                total += 1
            if paper[i][j] >= 2:
                overlap += 1

    print(total)

if __name__ == "__main__":
    main()
