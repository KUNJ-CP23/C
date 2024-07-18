//Find factorial of a number using function and recursive function
#include<stdio.h>
int fact(n);
void main(){
	int n,f;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial = %d",f);
}
int fact(n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
