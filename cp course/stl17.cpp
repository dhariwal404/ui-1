#include<bits/stdc++.h>
  using namespace std;
  int main(){
  vector<int>v={1,2,3,4,5,-1};
  cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl/*lambda function*/;
   cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl/*agar koi bhi value true hai sarai cases mai to true return*/;
   cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl/*not any element should have that conditon then true*/;
   
  }