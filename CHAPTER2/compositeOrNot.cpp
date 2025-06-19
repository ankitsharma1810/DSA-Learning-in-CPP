#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    bool flag = true;          // till now we will consider it prime 
    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0) {
            flag = false;      // now its composite , since it has a factor now
        break;                 // to get out of the loop
    }
}
    if (n==1) cout<<"neither prime nor composite";
    else if (flag == true ) cout<<"prime number";
    else cout<<"composite number";
}
