bool checkAB(char input[]) {
	// Write your code here
    if(input[0]=='\0')
    {
        return 1;
    }
    if(input[0]=='a'&&input[1]=='\0')
    {
        return 1;
    }
    else if(input[0]=='a'&&input[1]=='a')
    {
        checkAB(input+1);
    }
    else if(input[0]=='a'&&input[1]=='b'&&input[2]=='b')
    {
        return(checkAB(input+3));
    }
    else
    {
         return 0;
    }
   
    

}



