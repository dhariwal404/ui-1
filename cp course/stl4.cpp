#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v={1,2,3,3,4,4,5};
     for (int i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<"";
     }
    cout<<endl;
    vector<int> ::iterator it=v.begin(); 
  for (it=v.begin(); it!=v.end() ; it++)
  {
     cout<<(*it)<<endl;
  }
  for (int value : v)// it will just make copy so you can use it &v as reference
  {
    cout<<value<<" ";//this is new feature of c++ library it act same as above code and IT IS ACTUALLY A COPY OF VECTOR AS IT IS RANGE BASED LOOP so use reference
  }
//    vector<int> ::iterator it=v.begin(); using auto instead of this syntax
//    THIS MAKE IT IS EASIER.
  for (auto it=v.begin(); it!=v.end() ; it++)
  {
     cout<<(*it)<<endl;
  }
  vector<pair<int,int>>v1={{1,2},{3,4},{4,5},{6,7}};
  for (auto &value : v1)
  {
    cout<<value.first<< " "<<value.second<<endl;
  }
  
  
}