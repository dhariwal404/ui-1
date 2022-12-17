// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<pair<int,int>>&v){
// cout<<"size: "<<v.size()<<endl;
// for (int i = 0; i < v.size(); i++)
//     {
//        cout<<v[i].first<< " "<<v[i].second<<endl;
//      }
// cout<<endl;
//  }
// int main(){
//     vector<pair<int,int>>v;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int x , y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     printvec(v);
// }










// array of vector

// #include<bits/stdc++.h>
// using namespace std;
// void printvec(vector<int>&v){
// cout<<"size: "<<v.size()<<endl;
//  for (int i = 0; i < v.size(); i++)
//      {
//        cout<<v[i]<< " ";
//       }
//  cout<<endl;
//   }
//  int main(){
//     int N;    // we are using N because so that we can do operations on every single vwctor  v[i] =  i < N
//     cin>>N;
//     vector<int>v[N];
//     for (int i = 0; i <N; i++)
//     {
//      int n;
//      cin>>n;
//      for (int j = 0; j < n; j++)
//     {
//         int x;
//          cin>> x;
//          v[i].push_back(x);
//      }  
    
     
//     }
//     for (int i = 0; i < N ; i++)
//     {
//         printvec(v[i]);

//     }
    
//     }


















// vector of vectors

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v){
cout<<"size: "<<v.size()<<endl;
 for (int i = 0; i < v.size(); i++)
     {
       cout<<v[i]<< " ";
      }
 cout<<endl;
  }
 int main(){
    int N;
    cin>>N;
    vector<vector<int>>v;
    for (int i = 0; i <N; i++)
    {
     int n;
     cin>>n;
     vector<int>temp;
     for (int j = 0; j < n; j++)
    {
        int x;
         cin>> x;
         temp.push_back(x);
     }  
    v.push_back(temp);
     } 
   
    for (int i = 0; i < v.size() ; i++)
    {
        printvec(v[i]);

    }
    
    }
