//7C1Check for equality of two numbers without using arithmetic or 
//comparison operator
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a and b = ");
	scanf("%d %d",&a,&b);
	(a^b)==0?printf("Both a and b are equal"):printf("a and b are not equal");
}



//5=0101 ^ 7=0111 = 0010
