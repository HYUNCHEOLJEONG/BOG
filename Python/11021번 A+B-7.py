def main():
    T = int(input())
    dist = []
    for _ in range(T):
        a, b = map(int, input().split())
        dist.append(a + b)

    for i, result in enumerate(dist, start=1):
        print(f"Case #{i}: {result}")

if __name__ == "__main__":
    main()
