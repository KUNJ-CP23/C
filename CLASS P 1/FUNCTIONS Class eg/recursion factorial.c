//factorial recursion
#include<stdio.h>
int fact(int n);
void main(){
	int n,f;
	printf("Enter the value of n= ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial : %d",f);
}
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
