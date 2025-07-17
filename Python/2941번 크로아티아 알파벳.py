def main():
    maps = {
        "c=": 1,
        "c-": 1,
        "dz=": 1,
        "d-": 1,
        "lj": 1,
        "nj": 1,
        "s=": 1,
        "z=": 1
    }

    s = input()
    count = 0
    i = 0

    while i < len(s):
        if s[i:i+3] in maps:
            count += 1
            i += 3
        elif s[i:i+2] in maps:
            count += 1
            i += 2
        else:
            count += 1
            i += 1

    print(count)


if __name__ == "__main__": 
    main()
