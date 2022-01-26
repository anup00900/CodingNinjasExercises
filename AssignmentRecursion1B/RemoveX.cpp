// Change in the given string itself. So no need to return or print anything
#include<string.h>

void removeX(char input[]) {
    // Write your code here
    int len=strlen(input);
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]=='x')
    {
        for(int i=0;i<len-1;i++)
        {
            input[i]=input[i+1];
        }
        input[len-1]='\0';
        removeX(input);
        
    }
    else
    {
        removeX(input+1);
    }
    

}
