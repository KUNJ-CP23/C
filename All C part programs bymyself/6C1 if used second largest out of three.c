//three "if's" must be used, second largest out of 3
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a,b,c = ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && b>c)
	{
	printf("b is second largest");
	}
	if (b>c && c>a)
	{
	printf("c is second largest");
	}
	if (c>a && a>b)
	{
	printf("a is second largest");
	}
}
