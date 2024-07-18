//sum of 1/1+1/2+1/3...1/n
#include<stdio.h>
void main (){
	float n,i,sum=0;
	printf("Enter the number = ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		sum=(1/i)+sum;
	}
	printf("Sum = %f",sum);
}
