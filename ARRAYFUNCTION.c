#include <stdio.h>

int sum(int [],int);
int sum(int arr[],int n)
int sum(int *,int);

int main()
{
    int arr[5]={1,2,3,4,5};
    printf("sum is : %d", sum(arr,5));
    return 0;
}

int sum(int arr[],int n)
{
    int sum =0;
    for(int i = 0; i<n ;i++)
    {
        sum += arr[i]; // sum = sum +arr[i];
    }
    return sum;
}
