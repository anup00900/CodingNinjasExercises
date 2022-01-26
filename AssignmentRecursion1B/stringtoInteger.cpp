#include<bits/stdc++.h>
using namespace std;
int sti(char input[],int s,int i)
{
    if(input[i]=='\0')
    {
        return s;
    }
    s=s*10+(input[i]-'0');
    return(sti(input,s,i+1));
}



int stringToNumber(char input[]) {
    // Write your code here
    int s=0;
    return(atoi(input));
    

}