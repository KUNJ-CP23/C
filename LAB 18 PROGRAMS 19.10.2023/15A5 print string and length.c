//Input a string in character array and print string and length of string
#include<stdio.h>
#include<string.h>
void main(){
	char a[100];
	
		printf("Enter string : ");
		gets(a);
		printf("String : %s",a);
	printf("\nString length = %d",strlen(a));
}
