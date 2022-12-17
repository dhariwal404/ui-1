/*given n strings and q queries.
in each query you have given a string 
n <= 10^6
|s|<=100
q<=10^6*/




#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<string,int>m;
int n;
cin>>n;
for (int i = 0; i < n ; i++)
{
    string x;
    cin>>x;
    m[x]++;
   
}
int q;
while(q--){
    string s;
    cin>> s;
    cout<<m[s]<<endl;
    
}
}
