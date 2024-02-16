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
//a

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int>v1(n), v2(m), v3(n+m);
    for(int i = 0; i < n;++i)
        cin>>v1[i];
    for(int i = 0; i < m;++i)
        cin>>v2[i];


    int i = 0 , j = 0, k = 0;
    while(i < n || j < m)
    {
        if(j == m || (i < n && v1[i] < v2[j]))
        {
            v3[k++] = v1[i++];
        }
        else
            v3[k++] = v2[j++];
    }

/*

            OR

    vector<int>v1, v2, v3;
    for(int i = 0; i < n;++i)
        cin_v_int(v1);
    for(int i = 0; i < m;++i)
       cin_v_int(v2);

    v1.push_back(INT_MAX);
    v2.push_back(INT_MAX);
    int i  = 0, j=0, k= 0;
    while(i < n || j < m)
    {
        if(v1[i] < v2[j])
            v3[k++] = v1[i++];
        else 
            v3[k++] = v2[j++];
    }

*/

    cout_v_int(v3);
    
    
    
    
  return 0;
}
    