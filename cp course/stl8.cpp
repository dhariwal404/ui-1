/*monk love candies whenever he eats candie which is maximum of candies
the candie automatically apperars gcd[n/2]
there fore you have to tell how many total candies he eat*/
/*test case- 1
  no. of candies- n
  time to eat candies-k
  and values eg - 1,2,4,7etc- */




#include<bits/stdc++.h>
using namespace std;

 int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int n ,k;
    cin>>n>>k;
    multiset<long long int>bags;
    for (int i = 0; i < n; i++)
    {
        long long int candy_ct;
        cin>>candy_ct;
        bags.insert(candy_ct);

    }
    long long total_candies =0;
    for (int i = 0; i <k; i++)
    {
        auto last_it= (--bags.end());//we are using this syntax as last digit of set is max no.
        long long int candy_ct = *last_it;
        total_candies += candy_ct;
        bags.erase(last_it);// because last digit in set is max no. so wehave to delete in and a new no. but to use this you cant just delete the last digit as it will erase every thing so we have to used iterator
        bags.insert(candy_ct/2);
    }
    
    cout<<total_candies;

   }
   
 }