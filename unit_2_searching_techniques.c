//Searching techniques:
//-------------------------
/*A Searching is a process of finding a specific element in a data structure 
1. Linear Search
2. Binary search*/

#include<stdio.h>

int main()
{
    int a[100];
    int key, i, n;
    int pos = -1;

    printf("Enter no of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key element:\n");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            pos = i;
            break;
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