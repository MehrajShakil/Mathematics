// C++ program to implement bitwise Sieve
// of Eratosthenes.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN  = 1e6;

ll phi[MAXN+1];

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

void solve()
{
   ll n;
   cin >> n;
   if(n<=2) cout << 1 << '\n';
   else{
   ll sum = phi[n]/2 * n;
   cout << sum << '\n';
   }
}

int main()
{
    PHI();
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
/*
Explanation ::
observation #1: when n>2 phi(n) is even.
observation #2: we know gcd(a,n)=gcd(n-a,n).
                so,if gcd(a,n)=1 then gcd(a-n ,n)=1.
                From this we can ensure that coprime r stay pairwise.
                n contain phi(n)/2 pairs. and every pair sum=n.
                so sum = n*phi(n)/2.
reference : forthright48.
*/


