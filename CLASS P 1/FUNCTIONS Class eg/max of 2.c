//max out of 2
#include<stdio.h>
int max(int a, int b);
void main(){
	int a,b;
	int maxval;
	printf("Enter the value of a and b = ");
	scanf("%d %d",&a,&b);
	maxval = max(a,b);
	printf("Maximun is %d",maxval);
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
