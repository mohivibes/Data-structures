#include <stdio.h>
int main()
{
 int array[100], size, i, j, temp;

 printf("Enter size of array : ");
 scanf("%d", &size);

 printf("Enter array elements : ");
 for (i = 0; i < size; i++)
 scanf("%d", &array[i]);

 for (i = 0 ; i < size-1; i++)
 {
 for (j = 0 ; j < size-i-1; j++)
 {
 if (array[j] > array[j+1])
 {
 temp = array[j];
 array[j] = array[j+1];
 array[j+1] = temp;
 }
 }
}
 printf("After Sorted :");
 for (i = 0; i < size; i++)
 printf("%d\t", array[i]);
 return 0;
} 