
//LIFO

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int>s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     while (!s.empty())
//     {
//         cout<<s.top()<<endl;
//         s.pop();
//     }
    

// }



//FIFO

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>s;
    s.push("abc");
    s.push("def");
    s.push("addsv");
    s.push("vfbf");
    while (!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }
    

}