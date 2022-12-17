
// #include<bits/stdc++.h>
// using namespace std;
// void print(set<string>&s){
//     for(string value : s){
//         cout<<value<<endl;
//     }
// }
// int main(){
//     set<string>s;
//     s.insert("sgb");
//       s.insert("ffg");
//         s.insert("dsv");
// //         auto it = s.find("sgb"); // if you areusing multiset and want to delete single value then use this syntax of finding iterator and delete it
// //         if(it != s.end()){
// //             s.erase(it);
// //  }
// s.erase("sgb");
// print(s);
       
// }





//for printing unique string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<string>s;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin>>str;
//         s.insert(str);
//     }
//     for(auto value : s){
//         cout<<value<<endl;
//     }
// }















// print strings with queries



#include<bits/stdc++.h>
using namespace std;

 int main(){
    unordered_set<string>s;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
         string str;
         cin>>str;
         s.insert(str);
     }
     int q;
     cin>>q;
     while (q--)
     {
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"no\n";
        }
        else
        {
         cout<<"yes";
        }
        
     }
     
     for(auto value : s){
         cout<<value<<endl;
     }
 }




 /* IN MULTISET YOU CAN ALSO ACCESS REPEATED DATA OR VALUE*/