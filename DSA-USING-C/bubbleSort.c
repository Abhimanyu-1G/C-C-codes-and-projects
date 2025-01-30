#include<stdio.h>
int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int bubble_sort(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0;j<n-i-1; j++)
        {
            if (arr[j]>arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int bubblesort_r(int arr[],int n,int i,int j)
{
    if(i==n-1)
    {
        return 0;
    }
    if(j==n-i-1)
    {
        return bubblesort_r(arr,n,i+1,0);
    }
    if (arr[j]>arr[j + 1])
    {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    return bubblesort_r(arr,n,i,j+1);
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    bubble_sort(arr, n);
    display(arr, n);
    int arr1[] = {5, 4, 3, 2, 1};
    display(arr1, n);
    bubblesort_r(arr1,n,0,0);
    display(arr1, n);

}