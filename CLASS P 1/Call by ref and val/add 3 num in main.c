//add 3 num print sum in main 
#include<stdio.h>
void add(int,int,int,int *);
void main(){
	int a,b,c,res=0;
	scanf("%d %d %d",&a,&b,&c);
	add(a,b,c,&res);
	printf("Sum = %d",res);
}
void add(int a ,int b,int c, int *d){
	*d=a+b+c;
}
