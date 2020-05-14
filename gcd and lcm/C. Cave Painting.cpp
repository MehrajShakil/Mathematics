// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

/// Author : Md Mehraj Hossain

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp> //order_of_key return number of elements less than x, find_by_order return index (pointer use kora lgbe)

using namespace std;
using namespace __gnu_pbds;

#define ull    unsigned long long
#define ll     long long
#define ios    ios::sync_with_stdio(0);cin.tie(0);
#define ses    "\n"
#define all(x) (x).begin(), (x).end()
//#define INF   ((int)2e18)
#define ii pair<ll, ll>

string digit="0123456789";
string small="abcdefghijklmnopqrstuvwxyz";
string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

const ll MAXN=1e6+1;
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

////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
    //ios

    ll n,k;
    read(n);
    read(k);


    /*

    here is an observation that,

    n % 1 = 0
    n % 2 = 1
    n % 3 = 2
    n % 4 = 3
    n % 5 = 4

    it must be occur for distinct reminder.
    it must be true that

     (n+1) % 1 = 0
     (n+2) % 2 = 0
     (n+3) % 3 = 0
     (n+4) % 4 = 0
     (n+5) % 5 = 0
      .
      .
      .
     (n+k) % k = 0

     we know that lcm(1.....k) is divisible by 1,2,3.....k.

     in this problem max limit is 10^18 and when k=42 then lcm(1....k) > 10^18.

     so, we could get yes when k is at most 42 otherwise No.

    */

    for(ll i=1; i<=k; i++)
    {
        if(n%i!=(i-1))
        {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";


}




/*
  Alhamdulillah
*/

