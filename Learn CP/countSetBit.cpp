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
    int n;
    cin>>n;
    int count = 0;
    printBinary(n,10);

    for(int i = 31; i>=0; i--)
    {
        if((n>>i)&1)
        {
            count++;
        }
    }
    cout<<"Total Set bits: " <<count<<endl;

    cout<<"Total Set bits: " <<__builtin_popcount(n)<<endl; // __builtin_popcount() is a built-in function in C++ which returns the number of 1-bits in the binary representation of the given number.
    return 0;
}
