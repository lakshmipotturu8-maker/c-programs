#include <stdio.h>
int main()
{
    int size;
    int i;
    
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
       scanf("%d ",&arr[i]);
    }
    
    printf("\n Elements before reversing: ");
    for(i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }
    
    printf("\n Elements after reversing: ");
    
    for(i=size-1;i>=0;i--)
    {
      printf("%d ",arr[i]);
    }
    return 0;
    
    
}
