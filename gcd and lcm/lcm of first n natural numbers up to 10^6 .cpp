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

const ll MAXN= 1e7;
const ll mod = 1e9+7;

bitset<MAXN+1> bs;
vector<ll> primes;

void sieve()
{
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4; i<=MAXN; i+=2)
        bs[i]=0;

    for(ll i=3; i<=MAXN; i+=2)
    {
        if(bs[i])
        {
            primes.push_back(i);
            for(ll j=i*i; j<=MAXN; j+=i<<1)
                bs[j]=0;
        }
    }
}

ll lcmof1ton(ll n)
{
    ll lcm=1;
    for(ll i=0; i<primes.size() and primes[i]<=n; i++)
    {
        ll p = primes[i];
        while(p*primes[i]<=n)
            p*=primes[i];

        lcm*=p;
        lcm%=mod;
    }
    return lcm;
}

int main()
{
    sieve();
    ll n;
    cin >> n;
    cout << lcmof1ton(n);
}
