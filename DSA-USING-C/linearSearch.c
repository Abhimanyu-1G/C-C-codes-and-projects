#include<stdio.h>
int ls_i(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int ls_r(int arr[],int n,int x,int i)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==x)
    {
        return i;
    }
    return ls_r(arr,n,x,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    printf("\nIndex of %d is %d\n by using linear search (iterative)",x,ls_i(arr,n,x));
    printf("\nIndex of %d is %d\n by using linear search(recursive)",x,ls_r(arr,n,x,0));
    return 0;
}