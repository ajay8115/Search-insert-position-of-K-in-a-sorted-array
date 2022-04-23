#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int searchInsertK(vector<int> a, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            return i;
        }
    }

    return n;
}