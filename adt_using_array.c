/*create()
insert(arr,pos)
delete(arr,pos)
*/


#include<stdio.h>
int n;
int arr[100];
void create()
{
    int i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display()
{
    int i;
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}  
void insert(int arr[], int pos)
{
    int i, value;
    printf("Enter value to insert:\n");
    scanf("%d",&value);
    for(i=n;i>=pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    n++;
}
void delete(int arr[], int pos)
{
    int i;
    for(i=pos-1;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

}


int main()
{
    int i,arr[100],pos;
    create();
    display();
    printf("Enter position to delete the array element\n");
    scanf("%d",&pos);
    delete(arr,pos);
    display();
    return 0;
}                           