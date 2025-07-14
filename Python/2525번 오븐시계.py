def solution(Time_X,Time_Y,Time_Z):
  if(Time_Y + Time_Z <60):
        return Time_X , Time_Y + Time_Z
  else :
    a = (Time_Y + Time_Z) //60
    b = (Time_Y + Time_Z) % 60
    if(Time_X + a >= 24):
        return Time_X + a - 24, b
    else :
        return Time_X + a, b
    
def main():
   X,Y= map(int,input().split())
   Z=int(input())
   h,m =solution(X,Y,Z)
   print(h,m)

if __name__ == "__main__" : 
   main()


   
