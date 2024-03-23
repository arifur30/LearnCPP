#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define vll vector<ll>

struct Stack{
    vector<ll> s, smin = {LLONG_MAX}, smax = {LLONG_MIN};
    void push(ll x)
    {
        s.push_back(x);
        smin.push_back(min(smin.back(), x));
        smax.push_back(max(smax.back(), x));
    }
    ll pop()
    {
        ll res = s.back();
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
        return res;
    }
    ll findmin()
    {
        return smin.back();
    }
    ll findmax()
    {
        return smax.back();
    }

    bool empty()
    {
        return s.empty();
    }
    
};

Stack s1,s2;
ll k;

void add(ll x)
{
    s2.push(x);
}

void remove()
{
    if(s1.empty())
    {
        while(!s2.empty())
        {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

bool isGood()
{
    ll mn = min(s1.findmin() ,s2.findmin());
    ll mx = max(s1.findmax(), s2.findmax());

    return mx - mn <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n, res = 0;
    cin >> n >> k;
    vll a(n);
    for(ll i =0 ; i < n; i++)
    {
        cin >> a[i];
    }

    for(ll l = 0, r = 0; r < n; r++)
    {
        add(a[r]);
        while(!isGood())
        {
            remove();
            l++;
        }
        res += r - l + 1;
    }
    cout << res << nl;
    return 0;
}
    