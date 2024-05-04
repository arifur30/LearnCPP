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
#define MOD 1000000007
#define all(x) x.begin(), x.end()

ll x, y, n;
bool isGood(ll t)  // t is the mid
{
    
    if(t< min(x,y))
        return false;
    ll cnt = 1;
    t -= min(x, y);
    
    cnt += t/x + t/y;
    
    
    return cnt >= n;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x>> y;
    ll lo = 0, hi = n* max(x,y), mid;
    while(hi-lo > 1)
    {
        mid = lo + (hi-lo)/2;
        if(isGood(mid))
            hi = mid;
        else
            lo = mid;
    }
    if(isGood(lo))
        hi = lo;
    cout<<hi<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
