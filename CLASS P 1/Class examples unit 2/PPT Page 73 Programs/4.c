#include<stdio.h>
void main(){
	int i,n,sum=0,rem;
	printf("Enter the number = ");
	scanf("%d",&n);
	while (n!=0){
	rem=n%10;
	sum=(sum*10)+rem;
	n=n/10;
}
    printf("%d",sum);
}
