#include <stdio.h>
#include <limits.h>

int third_largest(int *arr, int size);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    printf("Enter the elements into the array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
    
    return 0;
}

int third_largest(int *arr, int size)
{
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    return third;
}
