#include<Stdio.h>
int main()
{
    int a[50];
    int key ,n,pos = -1,low=0,mid,high;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search");
    scanf("%d",&key);
    high=(n-1);
    while(low<=key)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            pos = mid;
            break;
        }else if(a[mid]<key){
         high= mid-1;
        }else{
            low = mid +1;
        }
        }
     if(pos != -1)
    {
        printf("Element is found at position %d", pos + 1);
        printf("\nElement is found at index %d", pos);
    }
    else
    {
        printf("Element is not found");
    }
    return 0;
    }
