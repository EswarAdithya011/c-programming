#include<stdio.h>
void main()
{
	char oper;
	int n1,n2;
	printf("Enter an operator(+ - * / %):");
	scanf("%c",&oper);
	printf("\nEnter two numbers ");
	scanf("%d\t%d",&n1,&n2);
	switch(oper)
	{
		case '+':
			printf("The sum of 2 numbers is :%d\n",n1+n2);
			break;
		case '-':
			printf("The differnce of 2 numbers is :%d\n",n1-n2);
			break;
		case '*':
			printf("The product of 2 numbers is :%d\n",n1*n2);
			break;
		case '/':
			printf("The quotient of 2 numbers is :%d\n",n1/n2);
			break;
		case '%':
			printf("The remainder of 2 numbers is :%d\n",n1%n2);
			break;
		default:
			printf("Enter a valid operator");
			break;
    }
}
