#include<stdio.h>
int Find_Max(int arr[],int n)
{
	int i,j,first ,second,temp;
	first = arr[0];
	second = arr[1];
	if(first < second)
	{
		temp = first;
		first = second;
		second = temp;
	}

	for(i=2;i<n;i++)
	{
	
			if(arr[i]>=first)
			{
				second = first;
				first = arr[i];
			}
			else if(arr[i] >= second)
				second=arr[i];
	}
	printf("\narray after removing two max element:\n");
	for(i=0;i<n;i++)
        {
                if(arr[i] != first && arr[i] != second)
                {
                   
                        printf("%d\t",arr[i]);
                }
	
        }

	return 0;
}
void Print_Array(int arr[],int n)
{
	printf("orignal array is:");
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}

int main()
{
	int n,arr[20],i;
	printf("how many elemnt:");
	scanf("%d",&n);
	printf("enter array element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	Print_Array(arr,n);
	Find_Max(arr,n);
	return 0;
}
