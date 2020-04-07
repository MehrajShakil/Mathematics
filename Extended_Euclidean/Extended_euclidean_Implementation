#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int & x, int & y) {
    if (a == 0) {
        x = 0;
        y = 1;
        //cout<<" here "<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
        return b;
    }
    int x1, y1;
   // cout<<"age "<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    //cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<d<<endl;
    return d;
}
int main(){
int a,b,x,y;
cin>>a>>b;
int g = gcd(a,b,x,y);
cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<g;
}
