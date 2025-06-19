#include<iostream>
using namespace std;
int main(){
   int a , b , c ;
   cout<<"enter 1st number :";
   cin>>a;
   cout<<"enter 2nd number :";
   cin>>b;
   cout<<"enter 3rd number :";
   cin>>c;

  if(a>b){     // b can never be greatest
       if (a>c)  
       cout<<a<<" is greatest";
       else  // c>a>b
        cout<<c<<" is greatest";
  } 
  if(b>a){    // a can never be greatest
       if (b>c)  
       cout<<b<<" is greatest";
       else // c>b>a
       cout<<c<<" is greatest";
  }
   }  
