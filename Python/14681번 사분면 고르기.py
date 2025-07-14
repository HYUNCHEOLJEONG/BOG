def solution(x,y):
    if(x>0 and y>0):
        return 1
    elif(x<0 and y>0):
        return 2
    elif(x<0 and y<0):
        return 3
    else :
        return 4
    
def main():
    Ax= int(input())
    Ay= int(input())
    print(solution(Ax,Ay))

if __name__ == "__main__":
    main()
