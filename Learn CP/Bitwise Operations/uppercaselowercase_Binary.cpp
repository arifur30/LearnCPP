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
    cout<<"Enter a lowercase character: ";
    char x;
    cin>>x;

    printBinary(x,10); // lowercase C in binary ASCII(99)     0001100011
    printBinary(x-32,10); // Uppercase C in binary ASCII(67)  0001000011
    // The difference between the lowercase and uppercase is on the 5-th bit. 
    // Lowercase letters have the 5-th bit set to 1, while uppercase letters have the 5-th bit set to 0.
    // To convert a uppercase letter to lowercase, we need to set the 5-th bit to 1.
    // OR gate ( | ) is used to set the 5-th bit to 1. char x | (1<<5)   // 1 <<5 = 0001000000  // 1 << 5 = ' '  space
    cout<< "Enter a uppercase character: ";
    cin>>x;
    char ch = (x | (1<<5));
    cout<<"The uppercase of "<<x<<" is "<<ch<<endl;

    // To convert a lowercase letter to uppercase, we need to set the 5-th bit to 0.
    // AND gate ( & ) is used to set the 5-th bit to 0. char x & ~(1<<5)   // ~(1<<5) = 1110111111 NOT GATE

    cout<< "Enter a lowercase character: ";
    cin>>x;
    ch = (x & ~(1<<5));  // ~(1<<5) = 1110111111 NOT GATE = '_' underscore
    cout<<"The lowercase of "<<x<<" is "<<ch<<endl;

    cout<< "The uppercase of 'a' = "<<char('a' & '_')<<"\tsee the code procedure"<<endl;
    cout<< "The lowercase of 'Z' = "<<char('Z' | ' ')<<"\tsee the code procedure"<<endl;

    return 0;
}
