#include<bits/stdc++.h>
using namespace std;

void printBinary(int x, int totalbit)
{
    for(int i = totalbit-1; i>=0; i--)
    {
        cout<<((x>>i)&1);
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the number of bits: ";
    int n,x;
    cin>>n;
    cout<<"Enter a number: ";
    cin>>x;
    printBinary(x,n);
    return 0;
}
