struct Combinatorics{
    ll fac[N],inv[N];

    ll BigMod(ll b,ll p,ll m)
    {
        ll ret = 1;
        while(p > 0){
            if(p % 2 == 1)ret = (ret * b) % m;
            p = p >> 1;
            b = (b * b) % m;
        }
        return ret;
    }

    void init(){
        fac[0] = 1;
        for(int i = 1;i < N;i++)fac[i] = (fac[i - 1] * i) % MOD;
        for(int i = 0;i < N;i++)inv[i] = BigMod(fac[i],MOD-2,MOD);
    }

    ll com(ll n,ll r)
    {
        if(n < r)return 0;
        ll u = fac[n];
        ll v = (inv[r] * inv[n - r]) % MOD;
        return (u * v) % MOD;
    }
    ll FAC ( ll n ){ /// added.
       return fac[n];
    }
    ll INV ( ll n ){
       return inv[n];
    }

}combi;
