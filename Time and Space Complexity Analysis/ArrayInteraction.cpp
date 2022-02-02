#include<bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{
    int k=d;
    vector<int>v(input,input+n);
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+(n-k));
    reverse(v.begin()+(n-k),v.end());
    
    for(int i=0;i<n;i++)
    {
        input[i]=v[i];
    }
    
    
}