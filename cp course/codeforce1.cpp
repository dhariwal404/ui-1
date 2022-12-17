#include<bits/stdc++.h>
using namespace std;
//sum of digits of number

int main(){
    int n;
    cin>>n;
    int digit_sum = 0;// it is initialization
    while (n>0)
    {
        int last_digit = n%10;//helps to remove last digit
        digit_sum = digit_sum + last_digit; //we are defining variable one more time as a local variable
        n = n/10;//we have done this because so that the value we put can be repeat to next without last digit in loop
    }
    cout<<digit_sum<<endl;
}   
    
