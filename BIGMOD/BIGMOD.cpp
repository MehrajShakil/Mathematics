
// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// Allah save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

/*

=> 3^4 mod 7

 q=3,b=4,mod=7
 res=1

 step 1::
 yes b>0
 a%=mod now a=3;
 res=1
 yes b>0
 no b is even
 a = a*a %mod that means a = 3*3 %7. a=2;
 b=2 because b divide by 2

 step 2::
 yes b>0
 no b is even
 a = a*a % mod so a = 4%7. so , a = 4
 b=1 because b divide by 2

 step 3::
 yes b>0
 yes, b is odd
 res = res * a %mod. so res = 4.

 step 4::
 No, b==0

 return res , so 4.

 */




#include<bits/stdc++.h>
using namespace std;

using ll =long long;


ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;    // divide b by 2.
    }
    return res;
}

int main(){

    ll a,b,mod;
    cin>>a>>b>>mod;
    cout<<binpow(a,b,mod);

}

