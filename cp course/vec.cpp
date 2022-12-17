#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
   int main(){
    vector<int>v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        printvec(v);
        v.push_back(6);
    }
    
    vector<int>v(10);
     v.push_back(7);
     v.push_back(0);
     vector<int>v2=v;
     v2.push_back(5);
     printvec(v);
     return 0;
   }