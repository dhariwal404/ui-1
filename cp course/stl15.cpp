// #include<bits/stdc++.h>
//   using namespace std;
//   int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
//    sort(a, a+n);
//    for(int i= 0; i<n; ++i){
//     cout<<a[i]<<" ";
//    } 
//    cout<<endl;
//    int *ptr = upper_bound(a+4,a+n,5/*this is the no. for which we need upperbound*/);
//    if (ptr==(a+n)){
//     cout<<"not found";
//     return 0;
// }
//  cout<<*ptr<<endl;  
//   }
   











   #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int n;
    cin>>n;
   vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
   sort(a.begin(), a.end());
   for(int i= 0; i<n; ++i){
    cout<<a[i]<<" ";
   } 
   cout<<endl;
  auto it = upper_bound(a.begin(),a.end(),5/*this is the no. for which we need upperbound*/);
   if (it == a.end()){
    cout<<"not found";
    return 0;
}
 cout<<*it<<endl;  
  }
   
  
