#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

ll  n , k, cnt[100001] = {0}, num = 0;
void add(ll *a)
{
    cnt[*a]++;
    if(cnt[*a] == 1)    
        num++;

}

void remove(ll *a)
{
    cnt[*a]--;
    if(cnt[*a] == 0)    
        num--;
}

bool good()
{
    return (num <=k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    cin>> n>> k;
    vector<ll>v1(n);
    for(ll i = 0; i < n;i++)
        cin>>v1[i];
    
    ll res = 0, l  = 0;
    for(ll r =0; r < n; r++)
    {
        add(&v1[r]);
        while(!good())
        {
            remove(&v1[l]);
            l++;
        }
        res += r - l +1;
    }

    cout<<res<<nl;
    
    return 0;
}
    