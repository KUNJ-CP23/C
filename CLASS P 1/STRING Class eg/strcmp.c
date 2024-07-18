//strcmp using string handling function
#include<stdio.h>
void main(){
	char a[100],b[100];
	printf("Enter string 1 = ");
	gets(a);
	printf("Enter string 2 = ");
	gets(b);
	if(strcmp(a,b)==0){
		printf("Strings are same");
	}
	else{
		printf("Not same");
	}
}
