def main():
    N = int(input())

    for i in range(9):
        print(N, "*", i + 1, "=", N * (i+1))

if __name__ == "__main__":
    main()

#파이썬에서는 기본적으로 공백을 띄고 출력을 한다
# 따라서 print()함수는 기본적으로 공백을 가지고
#있으므로 출력을 붙여서 사용할때에는 
#print(f"{N} * {i + 1} = {N * (i+1)}")와 같이
#사용하면 된다.