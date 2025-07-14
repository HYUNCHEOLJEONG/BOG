def solution(A,B):
    if(A>B):
        return '>'
    elif(A<B):
        return '<'
    elif(A==B):
        return '=='

def main():
    A, B= map(int,input().split())
    print(solution(A,B))

if __name__ == "__main__":
    main()