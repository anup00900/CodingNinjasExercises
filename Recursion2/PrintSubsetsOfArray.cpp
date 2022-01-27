#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subset(int input[], int n, int output[][20]) {
    // Write your code here
    if(n==0)
{
    output[0][0]=0;
    return 1;
}
int smalloutput=subset(input+1,n-1,output);
for(int i=0;i<smalloutput;i++)
{
    output[i+smalloutput][0]=output[i][0]+1;
    output[i+smalloutput][1]=input[0];
    for(int j=0;j<output[i][0];j++)
    {
        output[i+smalloutput][j+2]=output[i][j+1];
    }
}
return 2*smalloutput;

}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    
    int n = pow(2,size);
    int output[n][20];
    int siz = subset(input, size, output);

  for( int i = 0; i < siz; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
