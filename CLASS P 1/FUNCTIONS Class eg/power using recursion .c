//power using recusion
#include<stdio.h>
int power(int x,int y);
void main()
{
	int x,y,p;
	printf("Enter the value of x= ");
	scanf("%d",&x);
	printf("Enter the power of x,y = ");
	scanf("%d",&y);
	p=power(x,y);
	printf("%d ^ %d = %d",x,y,p);
}
int power(int x, int y){
	if(y==0){
		return 1;
	}
	else{
		return (x*power(x,y-1));
	}
}
