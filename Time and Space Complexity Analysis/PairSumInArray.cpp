int pairSum(int *arr, int n, int num)
{
	//Write your code here
    int c=0;
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==num)
            {
                c++;
            }
        }
    }
    return c;
}