int findUnique(int *arr, int n) {
    // Write your code here
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s^arr[i];
    }
    return s;
}