#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

void cout_v_int(vector<int> &v)
    {
        for(auto it = v.begin(); it != v.end(); it++) 
        {
            cout << *it <<" ";   // for printing the vector
        }
        cout<<'\n';
    }

void cin_v_int(vector<int>&v)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int>v1(n), v2(m), v3;
    for(int i = 0; i < n;++i)
        cin>>v1[i];
    for(int i = 0; i < m;++i)
        cin>>v2[i];


    int i = 0 , j = 0, k = 0;
    while(i < n || j < m)
    {
        if(j == m || (i < n && v1[i] < v2[j]))
        {
            i++;
        }
        else
        {
          v3.push_back(i);
          j++;
        }
    }

    cout_v_int(v3);
    
    
    
    
  return 0;
}
    