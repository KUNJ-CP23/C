//character
#include<stdio.h>
void main(){
	char x='B';
	char *a;
	int y=20;
	int *p1=&y;
	a=&x;
	printf("\n%d",*a);
	printf("\n%d",x);
	printf("\n%d",a);
	printf("\n%d",*p1);
	
}
