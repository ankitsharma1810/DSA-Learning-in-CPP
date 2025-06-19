#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 1st number :";
    cin>>x;
    int y;
    cout<<"Enter 2nd number :";
    cin>>y;
    cout<<"Remainder when x/y is :";
    cout<<x%y;   //this is modulus .. this gives the remainder when x / y
}

// some imp points 
// 1) a % b = a [ if a<b]
// 2) a % (-b) = a % b
// 3) (-a) % b = - [a % b]
