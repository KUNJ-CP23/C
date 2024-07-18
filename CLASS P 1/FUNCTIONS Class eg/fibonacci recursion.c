//fibonacci recursion
#include<stdio.h>
int fibonacci(int);
void main(){
	int n,m=0,i;
	printf("Enter Total terms = \n");
	scanf("%d",&n);
	printf("Fibonacci series = \n");
	for(i=1;i<=n;i++){
		printf("%d ",fibonacci(m));
		m++;
	}
}
int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
