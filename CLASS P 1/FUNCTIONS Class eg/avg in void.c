#include<stdio.h>
void avg(a,b);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	avg(a,b);              //actual parameter
}
void avg(int k,int j){     //formal parameter
	float c=(k+j)/2.0;
	printf("%f",c);
}
