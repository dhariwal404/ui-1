// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     sort(a,a+n);//sort(a,a+n) a is starting point to end to sort numbers;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" "<<endl;
//     }
//     cout<<endl;
    
// }











#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());//sort(a.begin(),a.end())) a is starting point to end to sort vector;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<endl; 
    }
    cout<<endl;
    
}