//string length manually
#include<stdio.h>
void main(){
	char a[100];
	printf("Enter the string : ");
	gets(a);
	int i,count=0;
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	printf("String length is : %d",count);
}
