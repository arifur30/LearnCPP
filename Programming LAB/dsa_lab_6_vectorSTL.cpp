#include <bits/stdc++.h>
using namespace std;

void cin_v_int(vector<int>&v)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}

void cout_v_int(vector<int> &v)
{
    for(auto it= v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
    cout<<'\n';
}


int main() 
{
    vector<int> v;

    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    for(int i = 0 ; i < n; i++)
    {
        cin_v_int(v);
    }
    cout<<"The vector is: ";
    cout_v_int(v);

    cout<<"Vector after pop_back(): ";
    v.pop_back();
    cout_v_int(v);

    cout<<"Front element of the vector: "<<v.front()<<'\n';
    cout<<"Back element of the vector: "<<v.back()<<'\n';

    cout<<"Insert any element on the position: ";
    int pos, ele;
    cin>>pos;
    cout<<"Enter the element: ";
    cin>>ele;
    v.insert(v.begin()+pos, ele);
    cout<<"Vector after insertion: ";
    cout_v_int(v);


}