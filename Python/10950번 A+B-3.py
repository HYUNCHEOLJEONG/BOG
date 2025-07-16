def main():
    T= int(input())
    dist =[]
    for i in range(T):
        a,b = map(int, input().split())
        dist.append(a+b)
    
    for num in dist :
        print(num)

if __name__ == "__main__":
    main()