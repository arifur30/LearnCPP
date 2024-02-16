#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n,m,ans = 0;
  cin>>n>>m;
  vector<ll>v1(n), v2(m);
  for(ll i = 0; i < n; i++)
    cin>>v1[i];
  for(ll i = 0; i < m; i++)
    cin>>v2[i];
  for(ll i =0 , j = 0, z = 0; i < m; ++i)
  {
    while (j < n && v1[j] < v2[i])
    {
      j++;
    }
    while (z < n && v1[z] <= v2[i])
    {
      z++;
    }
    ans += (z-j);
    
    
  }
  cout<<ans<<nl;
  
  
  return 0;
}
    