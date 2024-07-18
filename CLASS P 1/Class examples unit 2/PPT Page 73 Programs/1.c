//sum of odd numbers until n
#include<stdio.h>
void main (){
	int n,i,sum=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=(2*i)+1+sum;
	}
	printf("Sum = %d",sum);
}
