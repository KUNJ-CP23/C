#include<stdio.h>
void main (){
	int i,n;
	printf("Enter n to find factors = ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{if(n%i==0){
		printf("%d,",i);
	}
	}
}
