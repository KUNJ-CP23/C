//pointer syntax
#include<stdio.h>
void main(){
	int *a;
	int x=10;
	a=&x;
	printf("%d",*a);
	printf("\n%d",&a);
}
