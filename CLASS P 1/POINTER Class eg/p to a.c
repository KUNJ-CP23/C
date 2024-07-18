//pointer to array
#include<stdio.h>
void main(){
	int a[5]={1,2,3,4,5};
	char str[10]="Hello";
	int *ptr;
	char *ptr1=str;
	ptr=a;
	printf("%d",*(ptr+1)+20);
	printf("\n%s",ptr1);    //aaya %c lakhu to sathe *ptr karvu pade toj H print karse
}
