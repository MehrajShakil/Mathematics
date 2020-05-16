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

ll lcm(ll arr[], ll n)
{

    /// find max element of this array.

    ll mx = 0;
    for(ll i=0; i<n; i++)
    {
        mx = max(mx,arr[i]);
    }

    ll ans  =1,x=2;

    while(x<=mx)
    {
        ll div=0;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]%x==0)
                div++;
        }

        if(div>=2)
        {
            for(ll i=0; i<n; i++)
            {
                if(arr[i]%x==0)
                {
                    arr[i]/=x;
                }
            }
            ans*=x;
        }
        else
            x++;
    }

    for(ll i=0;i<n;i++){
        ans*=arr[i];
    }
    return ans;
}



int main()
{

    ll n,ans=0;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin >>arr[i];



    cout << lcm(arr,n) << "\n";
}
