// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

/// Author : Md Mehraj Hossain

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MAXN=1e8;

const int pd[210] =
{
10,0,0,0,0,0,0,0,0,0,2,0,4,0,0,0,2,0,4,0,0,0,6,0,0,0,0,0,2,0,6,0,0,0,0,0,4,
0,0,0,2,0,4,0,0,0,6,0,0,0,0,0,6,0,0,0,0,0,2,0,6,0,0,0,0,0,4,0,0,0,2,0,6,0,
0,0,0,0,4,0,0,0,6,0,0,0,0,0,8,0,0,0,0,0,0,0,4,0,0,0,2,0,4,0,0,0,2,0,4,0,0,
0,8,0,0,0,0,0,0,0,6,0,0,0,0,0,4,0,0,0,6,0,0,0,0,0,2,0,4,0,0,0,6,0,0,0,0,0,
2,0,6,0,0,0,0,0,6,0,0,0,0,0,4,0,0,0,2,0,4,0,0,0,6,0,0,0,0,0,2,0,6,0,0,0,0,
0,4,0,0,0,2,0,4,0,0,0,2,0,10,0,0,0,0,0,0,0,0,0,2,0
};

#define PIS(_n) (pbits[(_n)>>5] & (1u << ((_n) & 0x1f)))
#define PSET(_n) (pbits[(_n)>>5] |= (1u << ((_n) & 0x1f)))
ll pbits[MAXN/32+1];

/* Prime list up to MAXN */
int prime[100000000], pos = 0;

void wheel( void )
{
  int i, j;

  prime[pos++] = 2;
  prime[pos++] = 3;
  prime[pos++] = 5;
  prime[pos++] = 7;

  for( i = 11; i <= MAXN; i += pd[(i-1)%210])
    if( !PIS(i) )
    {
      prime[pos++] = i;
      if( i <= 10000 )
      {
        int limit = MAXN / i;
        for( j = i; j <= limit; j += pd[(j-1)%210]){ int v = j * i; PSET( v ); }
      }
    }
}

int main()
{
    wheel();
    for(auto p : prime)
    {
        cout << p << '\n';
    }
}
