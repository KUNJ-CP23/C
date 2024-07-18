//Add two numbers using function
#include<stdio.h>
void main(){
	int n1,n2,add;
	printf("Enter the num1 and num2 = ");
	scanf("%d %d",&n1,&n2);
	add=sum(n1,n2);
	printf("Sum = %d",add);
}
    int sum(int n1,int n2){
    	int n3;
    	n3=n1+n2;
    	return n3;
	}
