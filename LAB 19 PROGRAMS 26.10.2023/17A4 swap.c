//17A4
#include<stdio.h>
void main (){
	int n1,n2;
	printf("Enter value n1 and n2 = ");
	scanf("%d %d",&n1,&n2);
	printf("Before swapping : %d %d",n1,n2);
	int *a=&n1;
	int *b=&n2;
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nAfter swapping : %d %d",*a,*b);
}
