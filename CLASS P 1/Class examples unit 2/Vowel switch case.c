//29.08.23,Tuesday vowel switch case
#include<stdio.h>
void main(){
	char n;
	printf("Enter the character: ");
	scanf("%c",&n);
	switch(n){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': printf("Vowel");
	break;
	default: printf("Consonant");
	}
}
