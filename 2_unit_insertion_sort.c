/*
Insertion Sort:
--------------------
Insertion sort is used to insert each element into its correct position in the sorted part of the array.

After every pass → one element is placed in correct position.

Left side is always sorted.
Right side is unsorted.

Algorithm:
-----------------

1.Take array a with n elements

2.Assume first element is already sorted

3.Start from second element (i = 1)

4.Store current element as key

5.Compare key with previous elements

6.Shift elements if they are greater than key

7.Insert key in correct position

8.Continue until array is sorted
*/
#include<stdio.h>
int main()
{
    int n,i,j,key;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        key = a[i];     
        j = i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];   
            j--;
        }
        a[j+1] = key;   
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
