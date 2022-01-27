#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


void permut(vector<char>nums,int size,vector<vector<char>>&v,int j)
{
    if(j == size)
    {
        v.push_back(nums);
        return;
    }
    for(int i=j;i<size;i++)
    {
        swap(nums[i],nums[j]);
        permut(nums,size,v,j+1);
        swap(nums[i],nums[j]);
    }
    
    
}




void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    vector<vector<char>>v;
    vector<char>nums;
    for(int i=0;i<input.length();i++)
    {
        nums.push_back(input[i]);
    }
    int size=input.length();
    permut(nums,size,v,0);
   
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    
    
   
    
}
