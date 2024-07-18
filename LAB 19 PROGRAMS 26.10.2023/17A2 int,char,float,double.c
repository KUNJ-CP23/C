//Demonstrate int, float, double and char pointer
#include<stdio.h>
void main(){
	int x=10;
	int *a=&x;
	printf("Address = %d",a);
	printf("\nValue = %d",*a);
	
	float y=20.0;
	float *b=&y;
	printf("\nAddress = %d",b);
	printf("\nValue = %f",*b);
	
	char ch='a';
	int *k=&ch;
	printf("\nAddress = %d",k);
	printf("\nValue = %c",*k);
	
	double z=34;
	double *d=&z;
	printf("\nAddress = %d",d);
	printf("\nValue = %lf",*d);
}
