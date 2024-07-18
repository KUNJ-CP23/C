//strncpy without using handling function
#include<stdio.h>
void main(){
	char a[100],b[100];
	printf("Enter the string b : ");
	gets(b);
	int i=0,n;
	printf("Enter the number until you want to copy the string = ");
	scanf("%d",&n);
	    for(i=0;b[i]!='\0';i++){ 
		    if(i<n)
		    	a[i]=b[i];
		}
		a[i]='\0';
	printf("Copied string a is %s",a);
}
