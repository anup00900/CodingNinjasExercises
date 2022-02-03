#include<bits/stdc++.h>
using namespace std;


void intersection(int *arr1, int *arr2, int n, int m) 
{
    vector<int>v1(arr1,arr1+n);
    vector<int>v2(arr2,arr2+m);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    unordered_map<int,int>umap;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(v1[i] == v2[j])
        {
            cout<<v1[i]<<" ";
            i++;
            j++;
        }
        else if(v1[i]>v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
        
        
    }
   
}