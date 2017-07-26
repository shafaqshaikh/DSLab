#include<stdio.h>
#include<
#define MAX SIZE 10
int stack[MAX SIZE], top=-1;
int isfull()
{
	if(top==1)
	{
		return 1
	}
	else
	{
		return -1
	}
	//return 1 if stack is full else return -1
}
int isempty()
{
if(top==-1)
{
	return 1
}
else
{
	return -1
}
	//return 1 if stack is empty else return -1
}
int peek()
{
	return stack(top)
// return element at thetop of stack
}
void push(int e)
{
	if(!isfull)
	{
		top++;
		 stack(top)=e;
		 msg element e succesfully inserted
	 }
	 else
	 {
		 msg stack overflow
	 
	// insert the element into stack
}
void pop(int e){
	int d;
	if(!isempty)
	{
		d=top of stack
		top--
		msg is successfuly deleted
	}
	else
	{
		msg stack underflow
	}
}
int main(){
	int choice,e;
	do
	{
		printf("menu 1.peek 2.push 3.pop 4.exit")
	printf("enter your choice");
	take input in choice variable
	switch(choice){
		 case 1: 
		 
		
	}while(1);
//remove the element from stack
}

