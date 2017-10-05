#include<stdio.h>
# define MAX_SIZE 100
int split(int arr[],int lower,int upper)
{
	int pivot=lower,temp;
	int a=pivot+1,b=upper;
	while(b>=a)
	{
		while(arr[a]<arr[pivot])
		a++;
		while(arr[b]>arr[pivot])
		b--;
		if(b>a)
		{
			temp=arr[a];
			arr[a]=arr[b];
			arr[b]=temp;
		}
	}
	temp=arr[b];
	arr[b]=arr[pivot];
	arr[pivot]=temp;
	return b;
}
void Quicksort(int a[],int lower,int upper)
 {
	 int i;
	 if(upper>lower)
	 {
	 i=split(a,lower,uppper);
	 Quicksort(0,upper,i-1);
	 Quicksort(a,i+1,upper);
	
 }
}

int main()
{
	int no,arr[MAX_SIZE],i,n,a;
	printf("enter the no of elements");
	scanf("%d",&no);
	printf("enter the array elements");
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	Quicksort(a,0,n-1);
	printf("the sorted array is");
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
}

