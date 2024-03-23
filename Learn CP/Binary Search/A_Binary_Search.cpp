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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k, x;
    cin >> n >> k;
    vll arr(n); arrin(arr,n);
    while(k--)
    {
        cin >> x;
        
        ll l = 0, hi = n-1;
        bool f = false;
        while(hi - l > 1)
        {
            ll mid = (l + hi) / 2;
            if(arr[mid] == x)
            {
                f = true;
                break;
            }
            if(arr[mid] >= x)
                hi = mid;
            else
                l = mid+1;

        }
        if(arr[l] == x || arr[hi] == x || f)
            YES;
        else
            NO;
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
