#include<iostream>
#include<vector>
using namespace std;
int main(){
int T,a,b;
vector<int>v;
cin >> T;
for(int i=0;i<T;i++){
  cin >> a >> b;
  v.push_back(a+b);
}

for(int i=0;i<T;i++){
  cout << "Case #"<<i+1<<": "<< v[i] << endl;
}


return 0;
}