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

double epsilon = 1e-6; // 10^-6  Need the accuracy for 6 decimal places
double nthroot(double x, int n)
{

    double lo = 1, hi = x, mid;
    while(hi - lo > epsilon)
    {
        mid = (lo + hi) / 2;
        if(pow(mid,n) < x)
            lo = mid;
        else
            hi = mid;
    }

    // lo and hi will be equal to the 6 decimal places
    // so return any of them
    // time complexity O(log(x) * log(x))
    return lo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    double x;
    cin >> x >> n;
    cout<<nthroot(x, n)<<nl;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
