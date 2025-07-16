def main():
    X= int(input())
    N= int(input())
    dist =[]
    for i in range(N):
        a,b =map(int,input().split())
        dist.append(a*b)

    sum =0
    for num in dist :
        sum += num

    if(X== sum):
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()