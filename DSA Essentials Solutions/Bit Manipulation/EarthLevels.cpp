#include<bits/stdc++.h>
using namespace std;

int earthLevel(int k)
{
    int ans = 0; 
     while (k > 0)
     {
         ans += (k & 1);
         k >>= 1; 
     }
     return ans; 
}
