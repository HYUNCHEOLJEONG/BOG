def solution(Time_X,Time_Y):
 if (Time_Y<45) :
    if(Time_X==0):
       return 23,Time_Y+15
    else :
       return Time_X-1,Time_Y+15
 elif(Time_Y >=45):
    return Time_X,Time_Y-45
def main():
    X,Y = map(int,input().split())
    h,m =solution(X,Y)
    print(h,m)

if __name__ == "__main__" :
    main()