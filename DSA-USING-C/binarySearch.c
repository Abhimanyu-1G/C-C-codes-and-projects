#include<stdio.h>
int binary_search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int bs_r(int arr[],int n,int x,int low,int high)
{
 if(low<=high)
 {
    int mid=(low+high)/2;
    if (arr[mid]==x)
        {
            return mid;
        }
    else if(arr[mid]<x)
        {
            return bs_r(arr,n,x,mid+1,high);
        }
    else if(arr[mid]>x)
        {
            return bs_r(arr,n,x,low,mid-1);
        }    
    else
        {
            return -1;
        }
 }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5; 
    int search= binary_search(arr,n,x);
    if(search==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at %dth index by binary search by iteration ",search);
    }
    int search_r= bs_r(arr,n,x,0,n-1);
    if(search_r==-1){
        printf("Element not found");
    }
    else{
        printf("\nElement found at %dth index by binary search by recursion ",search_r);
    }
}