//Print value and address of a variable
#include<stdio.h>
void main(){
	int x=10;
	int *a=&x;
	printf("Address = %d",a);
	printf("\nValue = %d",*a);
}
