// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

/// Author : Md Mehraj Hossain

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    ll n,ans=0;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin >>arr[i];
    ans = arr[0];
    for(ll i=1;i<n;i++){
       ll g = __gcd(ans,arr[i]);
       ans = (ans*arr[i])/g;
    }

    cout << ans << "\n";
}
