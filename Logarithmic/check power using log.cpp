#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*
   you can use this function when you only need the power that is b^x . So, you got ans x.
int log(long long x)
{
    return 64 - __builtin_clzll(x) - 1;
}

*/
int main(){

ll x,base;

cin>>x>>base;

float power = log(x)/log(base);

if(ceil(power)==floor(power)){
  cout<<x << " is a power of "<<base <<" that is "<<base<<"^"<<power;
}
else{
                cout<<"false";
}


}
