#include<stdio.h>
float avg(a,b);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	float res= avg(a,b);
	printf("%f",res);      //actual parameter
}
float avg(int k,int j){     //formal parameter
	float c=(k+j)/2.0;
	return c;
}
