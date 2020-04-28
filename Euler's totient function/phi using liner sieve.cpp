#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN = 1e7;
vector<ll>prime,mobius;

bool is_prime[MAXN+1];

int phi[MAXN];


void sieve(ll n)
{

    fill(is_prime,is_prime+MAXN,false);

    for(ll i=2; i<n; i++)
    {
        if(!is_prime[i])
        {
            prime.push_back(i);
            phi[i]=i-1; /// i is prime.
        }

        for(ll j=0; j<prime.size() && i*prime[j]<=n ; j++)
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



int main()
{
    ll n;
    cin >> n;
    sieve(n);

    cout<<phi[n]<<endl;

}
