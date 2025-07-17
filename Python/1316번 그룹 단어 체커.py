def main():
    count = 0
    N = int(input())
    for _ in range(N):
        s = input()
        group = True
        seen = [False] * 26

        for t in range(len(s)):
            if t > 0 and s[t] == s[t-1]:
                continue
            elif seen[ord(s[t]) - ord('a')]:
                group = False
                break

            seen[ord(s[t]) - ord('a')] = True

        if group:
            count += 1

    print(count)

if __name__ == "__main__":
    main()
