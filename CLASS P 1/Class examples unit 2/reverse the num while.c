//reverse the number while
#include<stdio.h>
void main(){
	int n,r;
	printf("Enter the number = ");
	scanf("%d",&n);
	while (n>0){
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
