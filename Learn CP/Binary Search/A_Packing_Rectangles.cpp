#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl
#define arrin2(arr, b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arr2Din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define frr(i,n) for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>

bool ifGood(ll w, ll h, ll n, ll mid)
{
    return (mid/w)*(mid/h) >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll w, h, n, l = 0, r;
    cin>>w>>h>>n;

    r = 1; // to avoid overflow
    while(!ifGood(w, h, n, r))
        r *= 2;
    ll mid;
    while(r > l + 1)
    {
         mid = (l+r)/2;
        if(ifGood(w, h, n, mid))
            r = mid;
        else
            l = mid;
    
    }
    cout<<r<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
