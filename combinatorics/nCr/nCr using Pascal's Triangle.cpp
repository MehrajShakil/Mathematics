// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// Allah save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1000003;

/*
          1
         1 1
        1 2 1
       1 3 3 1
      1 4 6 4 1
    1 5 10 10 5 1
  Pascal's triangle ....
*/
ll triangle[10001][10001];

void Build_triangle()
{
    ll i,j;
    triangle[0][0]=0;   //C(0,0)=1
    for(ll i=1; i<=10000; i++)
    {
        triangle[i][0]=1;    // C(i,0)=1 .
        for(ll j=0; j<=i; j++)
        {
            if(j==i or j==0){
                triangle[i][j]=1;
            }
            else triangle[i][j] = (triangle [i-1][j-1]%mod) + (triangle[i-1][j]%mod);
            triangle[i][j]%=mod;
        }
    }
}

ll nCr(ll n,ll r){

   return triangle[n][r];

}

int main(){

 Build_triangle();
 ll t;
 cin>>t;
 while(t--){
        ll n,r;
        cin>>n>>r;
        cout<<nCr(n,r)<<'\n';

 }

}
