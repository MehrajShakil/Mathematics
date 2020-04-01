#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll nCr(ll n,ll r)
{

    if(r==1)
        return n;
    if(n==r)
        return 1;
    return nCr(n-1,r) + nCr(n-1,r-1);
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        if(r==0)cout<<1<<'\n';
        else cout<<nCr(n,r)<<'\n';
    }
}
