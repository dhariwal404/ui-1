/*#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<"Size: "<<m.size()<<endl;
    for (auto &pr : m)
    {
       cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main(){
    map<int,string>m;
    m[1]="abc";//0(log(n))
      m[2]="cde";
        m[3]="dvb";
         m.insert({4,"vxv"});//another way to insert
         auto it =m.find(3);    //auto is functon used as it  v.begin() to v.end()--
       if(it !=m.end())
       m.erase(it);  // by using above syntax we can delete first function that will come accoring to sequence.
       //if string is stored in data type then comparison happen at each sides therfore time complexity s.size()log(n){m["abcd"]="abcd"}

        //  if (it== m.end())      // this syntax is used so that we  can get a "no value" output if we put a non valid value instead of error 
        //  {
        //     cout<<"no value";
        //  }else
        //  {
        // cout<<it->first<<" "<<it->second<<endl;
        //  }
         
         
         print(m);
} */



//Given n strings ,print unique string in lexographical orderwith their frequency
//n <= 10^5
//|s|<=100














#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>m;
int n;
cin>>n;
for (int i = 0; i < n ; i++)
{
    string x;
    cin>>x;
    m[x]++;
   
}
for(auto &pr : m){
    cout<<pr.first<<" "<<pr.second<<endl;
}

}
    

/*for unordered map insted of map use unordered_map
time complexity 0(1)
m.find =  0(1)  */
