//Find a character from given string
#include<stdio.h>
#include<string.h>
void main(){
	int n;
	char string[1000],ch,k;
	printf("Enter String = ");
	gets(string);
    n=strlen(string);
	printf("\nEnter your character = ");
	scanf("%c",&ch);
	int i;
	for(i=0;i<n;i++){
		if(ch==string[i]){
	printf("\nYour character is found);
		}
	}
}
