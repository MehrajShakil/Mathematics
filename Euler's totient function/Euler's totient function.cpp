#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define ios    ios::sync_with_stdio(0);cin.tie(0);

ll phi(ll n) {

    ll result = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    ios

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<phi(n)<<'\n';

    }



}
