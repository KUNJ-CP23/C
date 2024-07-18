//pointer syntax
#include<stdio.h>
void main(){
	char *a;
	char x='B';
	a=&x;
	printf("%d",*a);
	printf("\n%d",x);
}
