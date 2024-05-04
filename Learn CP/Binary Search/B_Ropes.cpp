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

bool good(double m, ll &k, vll &arr)
{
    ll sum = 0;
    fr(i, arr.size())
    {
        sum += arr[i]/m;
    }
    return sum >= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,k;
    cin>>n>>k;
    vll arr(n);
    arrin(arr, n);

    double l = 0, r = 1e8, mid;
    fr(i,100)   //  if we want to find upto 10^-9 precision, we can run the loop 100 times
    // 10^-9 - 10^9 = 10^18 
    // log2(10^18) = 60 , so 100 iterations will be enough
    {
        mid = (l+r)/2;
        if(good(mid, k, arr))
            l = mid;
        else
            r = mid;
    }
    // here value of l will be good

    cout<<setprecision(20)<<l<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
