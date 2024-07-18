#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter n = ");
	scanf("%d",&n);
	do 
	{
		if(n%i==0){
			printf("%d,",i);
		}
		i=i+1;
	}
	while(i<=n);
}
