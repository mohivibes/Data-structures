#include<stdio.h>
int linearsearch(int a[],int n,int key)
{
    if(n<0)
    return -1;
    if(a[n] == key)
    return n;
    linearsearch(a,n-1,key);
}
int main()
{
int a[5]={27,39,28,38,1};
int key = 28;
int pos= linearsearch(a, 5, 28);
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