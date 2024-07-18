//strcpy without using handling function
#include<stdio.h>
void main(){
	char a[100],b[100];
	printf("Enter the string b : ");
	gets(b);
	int i=0,n;
	    for(i=0;b[i]!='\0';i++){
	    	a[i]=b[i];
		}
		a[i]='\0';
	printf("Copied string a is %s",a);
}
