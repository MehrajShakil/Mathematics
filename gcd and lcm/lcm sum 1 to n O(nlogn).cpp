// C++ program to implement bitwise Sieve
// of Eratosthenes.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN  = 1e6;

ll phi[MAXN+1];
ll pre[MAXN+1];

void PHI()
{
    for(ll i=1; i<=MAXN; i++)
        phi[i]=i;

    for(ll i=2; i<=MAXN; i++)
    {
        if(phi[i]==i)
        {
            for(ll j=i; j<=MAXN; j+=i)
            {
                phi[j]-=phi[j]/i;
            }
        }
    }
}
void precal()
{
    for(ll i=1; i<=MAXN; i++)
    {
        for(ll j=i; j<=MAXN; j+=i)
        {
              pre[j]+=(i*phi[i]);
        }
    }
}
void solve()
{
   ll n;
   cin >> n;
   ll sum = pre[n];
   sum++;
   sum*=n;
   sum/=2;
   cout << sum << '\n';
}

int main()
{
    memset(pre,0,sizeof pre);
    PHI();
    precal();
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

