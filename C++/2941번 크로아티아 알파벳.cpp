#include<iostream>
#include<vector>
#include<map>
using namespace std;
map<string,int>maps ={
 {"c=",1},
 {"c-",1},
 {"dz=",1},
 {"d-",1},
 {"lj",1},
 {"nj",1},
 {"s=",1},
 {"z=",1}
};

int main(){
string str;
cin >> str;
int count =0;
for(int i=0;i<str.size();i++){
    if(maps.find(str.substr(i,3))!=maps.end()){
        count ++;
        i+=2;
    }
    else if(maps.find(str.substr(i,2))!=maps.end()){
        count++;
        i++;
    }
    else{
    count ++;}
}
cout << count;


return 0;

}