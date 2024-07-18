//pointer to array
#include<stdio.h>
void main (){
	int a[5]={1,2,3,4,5};
	int *ptr;
	ptr=a; //& not required bcoz array is ref by base address
	printf("%d",*ptr);
	
}
