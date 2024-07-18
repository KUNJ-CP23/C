//call by ref swap
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a and b : ");
    scanf("%d %d",&a,&b);
    
    printf("\nBefore swapping : %d %d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping : %d %d",a,b);
}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
