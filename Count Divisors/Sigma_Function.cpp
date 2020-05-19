///   BISMILLAHIR RAHMANIR RAHEEM
///   ALLAH IS WATCHING ME
///   ALLAH save us from COVID-19.Amin.

///   █▀█─█──█──█▀█─█─█
///   █▄█─█──█──█▄█─█▄█
///   █─█─█▄─█▄─█─█─█─█

///   كُلُّ نَفْسٍ ذَآئِقَةُ الْمَوْت
///   Every soul shall taste death.


///   Author : Md Mehraj Hossain

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp> //order_of_key return number of elements less than x, find_by_order return index (pointer use kora lgbe)

using namespace std;
using namespace __gnu_pbds;

#define ull      unsigned long long
#define ll       long long
#define MOHAMMAD ios::sync_with_stdio(0);cin.tie(0);
#define ses      "\n"
#define all(x)   (x).begin(), (x).end()
#define INF      ((int)2e18)
#define pi       2*acos(0.0)
#define AE       cout << fixed << setprecision(8);

string digit="0123456789";
string small="abcdefghijklmnopqrstuvwxyz";
string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

const ll MAXN=1e7;
const ll MOD = 1e9+7;

template <class T> inline T bigmod(T p,T e,T M)
{
    if(e==0)
        return 1;
    if(e%2==0)
    {
        ll t=bigmod(p,e/2,M);
        return (T)((t*t)%M);
    }
    return (T)((ll)bigmod(p,e-1,M)*(ll)p)%M;
}

template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);   // when M is prime;
}

typedef tree< ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<ll, ll>,null_type,less<pair<ll, ll>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

/// Fast read.
template<class T>inline bool read(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')
            sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}


//***********************************************  The END **********************************************************************************************************************************

/////////////////////////////////////////////////////////////////////////////
vector<ll> primes;
bitset<MAXN+1> bs;

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
            {
                bs[j]=0;
            }
        }
    }
}

ll Sigma_Function(ll n)
{
    ll sum=1;
    for(ll i=0; i<primes.size() and primes[i]*primes[i]<=n; i++)
    {
        ll p=primes[i],prod=p;
        while(n%p==0)
        {
            n/=p;
            prod*=p;
        }
        if(prod>p)
        {
            sum*=(prod-1)/(p-1);
        }
    }

    if(n>1)
    {
        sum*=(n*n-1)/(n-1);
    }
    return sum;
}

////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
    MOHAMMAD

    sieve();

    ll t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << Sigma_Function(n) << '\n';
    }
}

/*

  sigma(12) = 1 + 2 + 3 + 4 + 6 + 12
            = 28

  sigma(2^2 * 3^1) = (2^3-1)    (3^2-1)
                     -------  * -------
                       2-1        3-1
                   =  7 * 4
                   =  28

  Alhamdulillah
*/

