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
const ll MOD = 998244353 ;

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
ll mp[MAXN+1];

////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
     MOHAMMAD
    ll n,x,mn=1e18,f=-1,s=-1,mx=0;
    cin >> n;
    /// IN this problem when i use map or unordered_map i go TLE where global array give me AC.
    for(ll i=0; i<n; i++)
    {
        cin >> x;
        if(mp[x] and mn>x)
        {
            mn=x;
            f = mp[x];
            s = i+1;

        }
        mp[x]=i+1;
        mx = max( mx , x );
    }

    /// cout << f << " " << s << endl;

    for( ll gcd = 1 ; gcd<=MAXN and gcd<=mx ; gcd++)
    {
        ll ff = 0, ss = 0, a =0, b = 0;
        for(ll j=gcd ; j<=MAXN and j<=mx ; j+=gcd)
        {
            if(mp[j] and !ff)
            {
                ff = mp[j];
                a = j;
            }
            else if(mp[j] and !ss)
            {
                ss = mp[j];
                b = j;
            }
            if( ff and ss )
                break;
        }

        if( ff and ss )
        {

            ll lcm = a*b/gcd;
            if(lcm<mn)
            {
                mn = lcm;
                f = min(ff,ss);
                s = max(ss,ff);
            }
        }
    }

    cout << f << " " << s << '\n';

}

/*

  Alhamdulillah
*/

