//Factors of a number while
#include <stdio.h>
void main (){
	int n,i=1;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	while(i<=n){
		if (n%i==0){
			printf("%d",i);
		}
		i=i+1;
	}
}

