///WAP to sum 5 entered by user while
#include <stdio.h>
void main(){
	int n,i,sum=0;
	while (i<=4){
		scanf("%d",&n);
		i=i+1;
		sum=sum+n;
	}
	printf("Sum is : %d",sum);
}
