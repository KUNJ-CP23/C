//print number of numbers in a number
#include<stdio.h>
void main(){
	int n,count=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	while (n!=0){
		n=n/10;
		count=count+1;
	}
	printf("%d",count);
}
