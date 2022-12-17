#include<bits/stdc++.h>
  using namespace std;
  int main(){
    int n;
    cin>>n;
   vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
  cout<<min<<endl;
  int max = *max_element(v.begin(), v.end()); 
  cout<<max<<endl;
  int sum = accumulate(v.begin(), v.end(),0/*initializtion of sum*/);
 cout<<sum<<endl;
   int cnt = count(v.begin(), v.end(),2/*element that we have to consider*/);
cout<<cnt<<endl;
 auto it = find(v.begin(), v.end(),2/*element that we have to find*/);
if (it != v.end())
cout<<*it<<endl;
else
cout<<"Element not found"<<endl;
reverse(v.begin(),v.end());
for (auto val : v)
{
    cout<<val<<" ";
}
cout<<endl;
string s="adascdsvfgdbgf";
reverse(s.begin(),s.end());
cout<<s<<endl;





  }