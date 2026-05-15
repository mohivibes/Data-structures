#include<stdio.h>
int getMax(int arr[], int n) //54,34,65,87,98
{
	int i;
	int max = arr[0];//54
	for(i=0;i<n;i++) // 34>54, 65 > 54, 87>65, 98>87
	{
		if(arr[i]>max)
		{
			max = arr[i]; //98
		}
	}
	return max; //98
}
void radix(int arr[], int n)
{
	int i;
	int e1 =1;
	int m = getMax(arr,n);
	int bucket[10][n];
	while(m)
	{
		int count[10] = {};
		for(i=0;i<n;i++)
		{
			int pos = (arr[i]/e1)%10;
			bucket[pos][count[pos]++] = arr[i];
		}
		int j,k=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<count[i];j++)
			{
				arr[k++] = bucket[i][j];
			}
		}
		e1 *= 10;
		m /= 10;
	}
}
int main()
{
	int arr[] = {98,78,56,456,12};
	int i;
	int n = sizeof(arr)/sizeof(arr[0]);
	radix(arr,n);
	printf("After sorted: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
return 0;               
}