#include<iostream>
using namespace std;
int main(){
   cout<<"enter values with sign to be calculated :";
    float x;
    cin>>x;
    char y;
    cin>>y;
    float z;
    cin>>z;

    if (y=='+') cout<<"answer is : "<<x+z;
    else if (y=='-') cout<<"answer is : "<<x-z;
    else if (y=='*')  cout<<"answer is : "<<x*z;
    else if (y=='/') cout<<"answer is : "<<x/z;
    else cout<<"invalid operator";
}