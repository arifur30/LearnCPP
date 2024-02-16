#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    XOR properties::

    1. a^b^c == a^c^b == b^c^a == b^a^c
    2. x^0 = x  
    3. x^x = 0

     1001       1001
XOR  1001       0000
Ans: 0000       1001
    
    
    */ 
   int x = 5, y = 9;

   x = x ^ y;
   y = y ^ x; // y = y ^ (x^y) == y ^ y ^x == 0 ^ x == x
   x = x ^ y; // x = (x^y) ^ x == x^x^y = 0 ^ y = y
    cout<<x<<" "<<y<<endl;
    return 0;
}
