#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<map>
#include<iomanip>
using namespace std;
float sum;
float sum2;
pair<float,float>solution(string& s){ 
    map<string,float> Computerpile_scores ={
          {"A+",4.5},
          {"A0",4.0},
          {"B+",3.5},
          {"B0",3.0},
          {"C+",2.5},
          {"C0",2.0},
          {"D+",1.5},
          {"D0",1.0},
          {"F",0.0}
    } ; // 일부러 메번 검사하는것을 보여주기위해 전역 MAP으로 안뒀어요 ㅎㅎ

     string namevalue;
     stringstream ss(s);
     vector<string> v;
     while(ss >> namevalue){
     v.push_back(namevalue);
    }
    string grade = v[2];
    
    if(grade == "P"){
        return pair(0.0,0.0);
    }

    sum = float(stof(v[1])); //stof
    sum2 = Computerpile_scores[v[2]];

    return pair(sum,sum2);
}



int main(){
vector<string>v;
pair<float,float> result;
float sum = 0.0;
float sum2 = 0.0;
for(int i=0;i<20;i++){
     string s ;
     getline(cin,s);
     result = solution(s);
     sum += (result.first * result.second);
     sum2  += result.first;
}

cout << fixed << setprecision(6);
cout << (sum/sum2);

return 0;   
}