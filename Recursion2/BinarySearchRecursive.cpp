// input - input array
// size - length of input array
// element - value to be searched


int bs(int input[],int i,int j,int x)
{
    if(i >j)
    {
        return(-1);
    }
    int m=i+(j-i)/2;
    if(input[m] == x)
    {
        return m;
    }
    else if(input[m]>x)
    {
        return(bs(input,i,m-1,x));
    }
    else
    {
        return(bs(input,m+1,j,x));
    }
}



int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    
    return(bs(input,0,size-1,element));
    
    
    

}
