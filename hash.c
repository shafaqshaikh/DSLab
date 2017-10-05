/*Description:implementation of hashing
learner:shaikh shafaque naushad*/
#include<stdio.h>
#include<math.h>
#define MAX_SIZE 20
int hash(int K)
{
	return K%MAX_SIZE;
}
int linear_prob(int h)
{
	return ++h;
}


	int qaudratic_prob(int h,int i)
	{
		return h+pow(i,2);
}
int double_hashing(int h,int i)
{
	return h+i*linear_prob(h);
}
int display(int a[])
{
	int i;
	
	printf("\nThe elements of array are");
	for(i=0;i<MAX_SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
}
int main()
{
	int a[20],i,h,e,count,ch;
	for(i=0;i<20;i++)
	a[i]=-1;
	do{
		count=0;
	printf("\nEnter the no to be stored");
	scanf("%d",&e);
	h=hash(e);
	if(a[h]==-1)
	{
	a[h]=e;
	display(a);
}
	else
	{
		while(count<MAX_SIZE)
		{
			count++;
			printf("\ncollision occured at %d",h);
			printf("\nplease eneter your choich:");
			printf("\n1.Linear probing\n2.qaudratic probing\n3.double hashing\n");
			scanf("%d",&ch);
			switch(ch){
				case 1:
				h=linear_prob(h);
				break;
				case 2:
				h=qaudratic_prob(h,count);
				break;
				case 3:
				h=double_hashing(h,count);
				break;
				default:
				printf("\ninvalid choich");
				count--;
				break;
			}
		if(a[h]==-1)
		{
			a[h]=e;
			display(a);
			break;
		}
	}
}
if(count==MAX_SIZE)
{
	printf("\nThe array is full");
	return 0;
}
}while(1);
}
/*OUTPUT
The elements of array are12
45
63
85
69
7 
8
9
4
5
6
1
2
3
10
23
16
45
12
78

Enter the no to be stored12

collision occured at 12
please eneter your choich:
1.Linear probing
2.qaudratic probing
3.double hashing
1

collision occured at 13
please eneter your choich:
1.Linear probing
2.qaudratic probing
3.double hashing
2

collision occured at 17
please eneter your choich:
1.Linear probing
2.qaudratic probing
3.double hashing
3

collision occured at 71
please eneter your choich:
1.Linear probing
2.qaudratic probing
3.double hashing
4

invalid choich
collision occured at 71
please eneter your choich:
1.Linear probing
2.qaudratic probing
3.double hashing
/

