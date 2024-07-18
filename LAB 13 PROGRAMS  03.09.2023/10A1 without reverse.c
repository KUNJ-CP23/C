//10A1 without reverse
#include<stdio.h>
void main(){
	int n,i,sum=0,rem,ld;
	printf("Enter the value n = ");
	scanf("%d",&n);
    while (n!=0){
	rem=n%10; 
	sum=(sum*10)+rem;
	n=n/10;
} 
    printf("%d",sum);
}
