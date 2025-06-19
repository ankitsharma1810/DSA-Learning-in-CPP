#include<iostream>
using namespace std;
int main(){
    int x = 3 , y , z;
    y = x = 10;   // right to left chalta h assignment "=" k case me
    z = x < 10;   // x<10 is false so z=0 
    z = x < 11;   // x<11 is true so z=1

    cout<<x<<" "<<y<<" "<<z;
}