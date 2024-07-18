// call by address
#include<stdio.h>
void swap(int *,int *);
void main(){
	int a=5,b=10;
	printf("Before = %d %d",a,b);
	swap(&a,&b);
	printf("\nAfter = %d %d",a,b);
}
//int*a=&a  *b=&b
void swap(int *a ,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 
  
