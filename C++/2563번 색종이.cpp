#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
int N;
cin >> N;
int x,y;
vector<vector<int>>paper(101,vector<int>(101,0));
for(int i=0;i<N;i++){
 cin >> x >> y;
 for(int i= x; i<x+10;i++){
         for(int j=y; j<y+10;j++){
         paper[i][j] ++ ;
        }
    } 
}

int total =0;
int overlap =0;

for(int i=0;i<101;i++){
    
    for(int j=0;j<101;j++){
    if(paper[i][j] >= 1){
        total++;
    }
 if(paper[i][j] >=2 ){
        overlap++;
    }
    }

}

cout << total<< endl;






return 0;
}
