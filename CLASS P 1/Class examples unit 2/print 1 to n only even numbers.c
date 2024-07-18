//print 1 to n only even numbers while loop
#include<stdio.h>
void main(){
	int n,i=2;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	while (i<=n){
	printf("%d",i);
	i=i+2;
	}
}
