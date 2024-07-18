//byte data
#include<stdio.h>
void main(){
	int k;
	int *p1=&k;
	char x='A';
	char *a;
	a=&x;   
	printf("\n%d",p1);
	printf("\n%d",a);
	p1=p1+1;
	printf("\n%d",p1);
    a=a+1;
	printf("\n%d",a);
}
