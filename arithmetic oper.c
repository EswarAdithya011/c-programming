#include<stdio.h>
void main()
{
	int a,b,x;
	printf("Enter Any Two Numbers: ");
	scanf("%d\t%d",&a,&b);
	x=a+b;
	printf("\nsum of given no's is %d",x);
	x=a-b;
	printf("\ndifference of given no's is %d",x);
	x=a*b;
	printf("\nmultiplication of given no's is %d",x);
    x=a/b;
    printf("\nquotient of given no's is %d",x);
    x=a%b;
    printf("\nremainder of given no's is %d",x);

}
