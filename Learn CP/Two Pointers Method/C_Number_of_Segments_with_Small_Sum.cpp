#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,s,sum = 0, l , r,cnt= 0;
    cin>>n>>s;
    vector<ll>v1(n);
    for(ll i =0;i<n;i++)
        cin>>v1[i];
    for(l=0,r = 0; r<n;r++)
    {
        sum += v1[r];
        while(sum>s)
        {
            sum -= v1[l];
            l++;
        }
        cnt += r - l +1;
    }

    cout<<cnt<<nl;
    
    return 0;
}
    