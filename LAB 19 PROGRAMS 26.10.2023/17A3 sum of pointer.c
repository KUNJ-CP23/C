//Calculate sum of two numbers using pointer.
#include<stdio.h>
void main (){
	int n1,n2;
	printf("Enter value n1 and n2 = ");
	scanf("%d %d",&n1,&n2);
	int *a=&n1;
	int *b=&n2;
	printf("Sum = %d",*a+*b);
}
