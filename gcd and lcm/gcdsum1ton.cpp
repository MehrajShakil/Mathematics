#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 1e7;

bool is_prime[MAXN+1];
vector<ll> prime;
int phi[MAXN];

void PHI()
{
    fill(is_prime,is_prime+MAXN,false);
    phi[1]=1;
    for(ll i=2; i<MAXN; i++)
    {
        if(!is_prime[i])
        {
            prime.push_back(i);
            phi[i]=i-1; /// i is prime.
        }
        for(ll j=0; j<prime.size() && i*prime[j]<=MAXN ; j++)
        {
            is_prime[i*prime[j]]=true;
            if(i%prime[j]==0)
            {
                phi[i*prime[j]]=phi[i]*prime[j];
                break;
            }
            else
            {
                phi[i*prime[j]]=phi[i]*phi[prime[j]];
            }
        }
    }
}

void solve()
{
    ll n,sum=0;
    cin >> n;
    for(ll i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            ll d1 = i;
            ll d2 = n/i;
            cout << phi[n/d1] << " " << phi[n/d2] << endl;
            sum+=d1*(phi[n/d1]);
            if(d1!=d2)
                sum+=d2*(phi[n/d2]);
        }
    }
    cout << sum << '\n';
}

int main()
{
    PHI();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
