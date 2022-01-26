// Change in the given string itself. So no need to return or print the changed string.
#include<string.h>
void pairStar(char input[]) {
    // Write your code here
    int len=strlen(input);
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]==input[1])
    {
        for(int i=len+1;i>2;i--)
        {
            input[i]=input[i-1];
        }
        input[2]=input[1];
        input[1]='*';
    }
    pairStar(input+1);
    
    
    
    
    

}
