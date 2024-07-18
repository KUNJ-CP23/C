#include<stdio.h>
int swap(int,int);
void main(){
	int a=5,b=10;
	printf("Before = %d %d",a,b);
	swap(a,b);
	printf("After = %d %d",a,b);
}
int swap(int a ,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	//badhui change thay ne badhu delete thay jaay upar kaay change thyuj na hoi
} 
  
