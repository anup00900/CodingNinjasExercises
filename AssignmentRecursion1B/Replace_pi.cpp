// Change in the given string itself. So no need to return or print anything
#include<string.h>
void replacePi(char input[]) {
	// Write your code here
    int len=strlen(input);
    if(input[0]=='\0')
    {
        return;
    }
    if(input[0]=='p' && input[1]=='i')
    {
        for(int i=len+1;i>3;i--)
        {
            input[i]=input[i-2];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        
        
    }
    replacePi(input+1);
    

}


