#include<iostream>
using namespace std;

void add(int &x,int &y){
    x=x+y;
}

int main(){
    int a; cout<<"Enter a: "; cin>>a;
    int b; cout<<"Enter b: "; cin>>b;
    add(a,b);
    cout<<a;
}