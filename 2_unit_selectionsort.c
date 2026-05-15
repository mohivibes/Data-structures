#include <stdio.h>
int main()
{
 int array[100], size, i, j, min,temp;

 printf("Enter size of array : ");
 scanf("%d", &size);

 printf("Enter array elements : ");
 for (i = 0; i < size; i++)
 scanf("%d", &array[i]);

 for (i = 0 ; i < size-1; i++)
 {
    min = i;
 for (j = i+1 ; j < size; j++)
 {
 if (array[j] < array[min])
 {
    min = j;
 }
}
if(min != i)
{
    temp = array[i];
    array[i] = array[min];
    array[min] = temp;
}
}
 printf("After Sorted :");
 for (i = 0; i < size; i++)
 printf("%d ", array[i]);
 return 0;
} 