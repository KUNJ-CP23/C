//Find whether the given number is prime or not
#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count=count+1;
		}
		i++;
		}
		if(count==2){
			printf("Given number is prime.");
		}
		else{
			printf("Given number is not prime.");
		}
}
