def solution(year):
    if (year % 4==0 and year % 100 !=0 or year & year % 400 ==0):
        return 1
    else :
        return 0

def main() :
    year =int(input())

    print(solution(year))

if __name__ == "__main__":
    main()