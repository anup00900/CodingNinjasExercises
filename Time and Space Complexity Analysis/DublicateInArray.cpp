int findDuplicate(int *arr, int n)
{
    //Write your code here
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    int su=((n-2)*(n-1))/2;
    return(s-su);
}