//Program to count the set bits of a number using a LooUp table
#include <bits/stdc++.h>
using namespace std;
int table[256];
void LTable()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2]; //Storing the set bits till 256
    }
}
int countBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res += table[n & 0xff]; //Counting set bits in a number
        n = n >> 8;             //Dividing the 32 bit int 8 bit chunks
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    LTable();
    cout << "No of set bits are = " << countBits(n);
}