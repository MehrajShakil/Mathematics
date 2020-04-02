
// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// Allah save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void primeFactor(ll x, vector<pair<ll, ll>>& factors)
{
    ll sqrtX = ceil(sqrt(x))+1;
    if(x % 2 == 0)
    {
        ll p = 2;
        ll freq = 0;
        while(x % p == 0)
        {
            x /= p;
            freq++;
        }
        factors.push_back({p, freq});
    }
    for(ll i = 3; i <= sqrtX; i += 2)
    {
        if(x % i == 0)
        {
            ll p = i;
            ll freq = 0;
            while(x % p == 0)
            {
                freq++;
                x /= p;
            }
            factors.push_back({p, freq});
        }
    }
}

bool IsPrime(ll n,ll x)
{
    for(ll i=2; i<=n; i++)
    {
        if(!(x%i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll x;
    cin>>x;
if(IsPrime(ceil(sqrt(x)),x))
{
    cout<<x<<" "<<1;
}
else
{
    vector<pair<ll,ll> > v;
    primeFactor(x,v);
        for(auto it = v.begin(); it!=v.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<'\n';
        }
    }
}

