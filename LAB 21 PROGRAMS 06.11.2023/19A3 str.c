//Use string handling functions strlen(),strcmp(),strcpy(),strcat(),strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
void main(){
	char s1[5],s2[5],org;
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
	//s1[5]=org;
	printf("\nEnter length of the string 1 : %d, string 2 : %d",strlen(s1),strlen(s2));
	printf("\nComparing s1 and s2 : ");
	strcmp(s1,s2);
	if(strcmp==0){
		printf("\nBoth strings are same");
	}
	else{
	    printf("\nBoth strings are not same");	
	}
	strcpy(s1,s2);
	printf("\nCopying strings : ");
	printf("\nString s1 : %s ",s1);
	//s1[5]=org;
	strcat(s1,s2);
	printf("\nConcatinate : %s",s1);
	strrev(s2);
	printf("\nReveresed string");
	printf("\nString s2 : %s",s2);
	strlwr(s2);
	printf("\nPrint elements in lower case");
	printf("\nString s2 = %s",s2);
	strupr(s1);
	printf("\nPrint elements in upper case");
	printf("\nString s1 = %s",s1);
}
