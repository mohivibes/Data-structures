#include<Stdio.h>
int main()
{
    int a[6]={18,22,383,39,45,30};
    int key = 45,pos = -1,low=0,high=5,mid;
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
