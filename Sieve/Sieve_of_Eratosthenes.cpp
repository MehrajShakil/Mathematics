//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;

#define ull    unsigned long long
#define ll    long long
#define ios    ios::sync_with_stdio(0);cin.tie(0);
#define ses   "\n"

string digit="0123456789";
string small="abcdefghijklmnopqrstuvwxyz";

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1}; // 8-direction.......
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[]= {1,-1,0,0}; // 4-direction...........
int dy4[]= {0,0,1,-1};

const int N=1e6+5;
const int MOD=1e9+7;

/////////////////////////////////////////////////////////////////////////////
ll _sieve_size;
bitset<10000010> bs;
vector<int> primes;

void sieve(ll upperbound)
{
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i; j <= _sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
}

bool isPrime(ll N)
{
    if (N <= _sieve_size)
        return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    return true;
}
////////////////////////////////////////////////////////////////////////////

//main function is here.........
int main()
{
    sieve(10000000);
    cout<<isPrime(2147483647)<<ses;
    cout<<isPrime(136117223866661LL)<<ses;
    cout<<isPrime(2)<<ses;
}




//Alhamdulillah
