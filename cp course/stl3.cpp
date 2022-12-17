#include<bits/stdc++.h>
using namespace std;
int main(){
//     vector<int>v={1,2,3,3,4,4,5};
//     for (int i = 0; i < v.size(); i++)
//     {
//        cout<<v[i]<<"";
//     }
//    cout<<endl;
//    vector<int> ::iterator it=v.begin(); 
//  for (it=v.begin(); it!=v.end() ; it++)
//  {
//     cout<<(*it)<<endl;
//  }
 


 vector<pair<int,int>>v1={{1,2},{3,4},{5,6}};
 
 vector<pair<int,int>>::iterator it; //we have to declare the container whenever we have to use the iterator
 for ( it=v1.begin(); it!=v1.end(); it++)
 {
    cout<<(*it).first<<" "<<(*it).second<<endl;
 }
 for ( it=v1.begin(); it!=v1.end(); it++)
 {
    cout<<it->first<<" "<<it->second<<endl;
    //(*it).first=it->first
 }

}