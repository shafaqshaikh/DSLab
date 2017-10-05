#include<stdio.h>
# define MAX_SIZE 100
int binary_search(int a[],int n,int x)
{
	int mid=n/2;
	int high=n-1,low=0;
	while(high>=low)
	{
		if(a[mid]==x)
		return mid;
		if(x>a[mid])
		low=mid+1;
		else high=mid-1;
		mid=(low+high)/2;
	}
	return -1;
}
int main()
{
	int no,a[MAX_SIZE],i,search,x;
	printf("enter the no of elements");
	scanf("%d",&no);
	printf("enter the array elements");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be search");
	scanf("%d",&x);
	search=binary_search(a,no,x);
	if(x==search)
		printf("element %d is found at %d position",x,search);
	else
		printf("element not found");
	return 0;
}

