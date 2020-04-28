#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const ll MAXN = 1e7;
vector<ll>prime;

bool is_prime[MAXN+1];

void sieve(int n)
{

    fill(is_prime,is_prime+n,false);

    for(ll i=2; i<n; i++)
    {
        if(!is_prime[i])
            prime.push_back(i);

        for(ll j=0; j<prime.size() && i*prime[j]<n ; j++)
        {
            is_prime[i*prime[j]]=true;
            if(i%prime[j]==0)
                break;
        }
    }
    for(auto p : prime)
    {
        cout<<p<<' ';
    }
}

int main()
{
    ll n;
    cin >> n;
    sieve(n);

}
