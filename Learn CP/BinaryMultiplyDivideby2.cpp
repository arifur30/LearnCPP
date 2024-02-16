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
    cout<<"Enter a number: ";
    int x;
    cin>>x;

    printBinary(x>>1,32); // Divide by 2
    cout<<"  "<< (x>>1) <<endl;
    printBinary(x<<1,32); // Multiply by 2
    cout<<"  "<< (x<<1) <<endl;
    return 0;
}
