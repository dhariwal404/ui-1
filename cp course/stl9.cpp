// questions on nesting
//eg----
// #include<bits/stdc++.h>
// using namespace std;

//  int main(){
//     map<pair<string,string>,vector<int>>m;
//     int n;
//     cin >>n;
//     for (int i = 0; i < n; i++)
//     {
//         string fn , ln;
//         int ct;
//         cin>>fn>>ln>>ct;
//         for (int j = 0; j < ct; j++)
//         {
//             int x;
//             cin>>x;
//             m[{fn,ln}].push_back(x);
//         }
        
//     }
//     for (auto &pr : m)
//     {
//         auto &full_name=pr.first;
//         auto &list = pr.second;
//         cout<<full_name.first<<" "<<full_name.second<<endl;
//         cout<<list.size()<<endl;
//         for (auto &element : list){
//             cout<<element<<" ";
//             }
//        cout<<endl;
//     }
    
//  }




 /*Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input                       Sample Output      
3                                  Bob 99
Eve 78                             Alice 78
Bob 99                             Eve 78
Alice 78

*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,multiset<string>>marks_map;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int marks;
//         string name;
//         cin>>name>>marks;
//         marks_map[marks].insert(name); 

//     }
//     auto curr_it = --marks_map.end();
//     while (true)
//     {
//         auto &students = curr_it->second;
//         int marks = curr_it->first;
//         for (auto student : students){
//             cout<<student<<" "<<marks<<endl;
//             }
//             if (curr_it== marks_map.begin())break;
//             curr_it--;
//     }
    
    
// }        
            
       
 //  ALITER:-----
 #include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,multiset<string>>marks_map;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name); 
    }
for (auto marks_students_pr : marks_map){


        auto &students = marks_students_pr.second;
        int marks =  marks_students_pr.first;
        for (auto student : students){
            cout<<student<<" "<<-1*marks<<endl;
            }
}
    }        