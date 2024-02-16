#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

void cin_v_int(vector<int>&v)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}

void cout_v_int(vector<int> &v)
{
    for(auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
    cout<<'\n';
}




int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
    ll n, s;
    cin>>n>>s;
    vector<ll>v1(n);
    for(ll i =0; i < n; i++)
        cin>>v1[i];
    ll res = 0, sum = 0;
    for(ll r =0, l =0; r < n; r++)
    {
        sum += v1[r];
        while(sum > s)
        {
            sum -= v1[l];
            l++;
        }
        //cout<<l << " "<<r<<nl;
        res = max(res, r-l+1);
        //cout<<"res "<<res<<nl;
    }
    cout<<res<<nl;
  
  return 0;
}
    