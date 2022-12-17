//increasing order of pair and decreasing order of second part of pair


// #include<bits/stdc++.h>
//  using namespace std;
//  bool should_i_swap(int a ,  int b){
//     if(a > b )return true;
//     return false;
//  }
//  bool should_i_swap(pair<int, int>a , pair<int,int>b)
//  {if (a.first != b.first)
//  {
//     if (a.first>b.first) return true;
//     return false;
//    } else{
//     if (a.second<b.second)return true;
//     return false;
//    }
    
//  }
 
//  int main(){
//      int n;
//      cin>>n;
//      vector<pair<int,int>>a(n);
//      for (int i = 0; i < n; i++)
//      {
//          cin>>a[i].first>>a[i].second;
//      }
//      for (int i = 0; i < n; i++)
//      {
//        for (int j = 0; i < n; ++j)
//        {
//          if(should_i_swap(a[i], a[j])){
//             swap(a[i], a[j]);
//          }
//        }
       
//      }
//      for (int i = 0; i < n; i++)
//      {
//         cout << a[i].first << " "<<a[i].second << endl;
//      }
//      cout<<endl;
//  }











 // another way of doing problem


#include<bits/stdc++.h>
 using namespace std;
//  bool should_i_swap(int a ,  int b){
//    return a>b;   
//  }
 bool should_i_swap(pair<int, int>a , pair<int,int>b)
 {if (a.first != b.first)
 {
   return a.first>b.first ;
   } 
  return a.second > b.second;
    
 }
 
 int main(){
     int n;
     cin>>n;
     vector<pair<int,int>>a(n);
     for (int i = 0; i < n; i++)
     {
         cin>>a[i].first>>a[i].second;
     }
     sort(a.begin(), a.end(), should_i_swap/*comparator*/); // this is a comparator and help of inbuilt sort is been taken
     for (int i = 0; i < n; i++)
     {
        cout << a[i].first << " "<<a[i].second << endl;
     }
     cout<<endl;
 }




 // another way of doing problem