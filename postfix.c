#include<stdio.h>
#include<ctype.h> //for isaplha() function

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char c);
	
int pop(stack*);

int operation(int num1,int num2,char opr);

int evaluate(char pos[]);

int main()
{
	char postfix[30];
	printf("\nENTER POSTFIX EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\nEVALUATION OF POSTFIX EXPRESSION=%d\n",evaluate(postfix));
	return 0;
}

int operation(int num1,int num2, char opr)
{
	switch (opr)
	{
	case '+':
	return num1+num2;
	case '-':
	return num1-num2;
	case '*':
	return num1*num1;
	case '/':
	return num1/num2;
	
 }
}

int evaluate(char pos[])
{
	int result,e1,e2,i=0;
	char opr;
	stack s;
	
	while(pos[i]!='\0')
	{
		opr=pos[i];
		if(isdigit(opr))
		{
			push(&s,opr-'0');
		}
		else
		{
			e1=pop(&s);
			e2=pop(&s);
			result=operation(e1,e2,opr);
			push(&s,result);
		}
		i++;
	}
		return pop(&s);
	
}

void push(stack *s,char c)
{
	if(s->top>29)
	{
		printf("stack is full\n");
		return;
	}
	s->top++;
	s->a[s->top]=c;
}

int pop(stack *s)
{
	if(s->top=-1)
	{
		printf("stack is empty\n");
		return 0;
} 
else
    {
		char data=s->a[s->top--];
		return data;
    }
}

	
				
					
			
			
		
	


