#include <bits/stdc++.h>
using namespace std;
 
// function to find winner
string Winner(int piles[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= piles[i];

    if (res == 0 || n % 2 == 0)
        return "First Player";
 
    else
        return "Second Player";
}
 
// driver program
int main()
{
    int piles[] = { 1, 4, 3, 5 };
    int n = sizeof(piles) / sizeof(piles[0]);
    cout << "Winner = " << Winner(piles, n);
    return 0;
}
