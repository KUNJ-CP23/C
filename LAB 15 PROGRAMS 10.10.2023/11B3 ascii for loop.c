//Print all ASCII character with their values
#include<stdio.h>
void main(){
	int x=65,i,y=97;
	char ch='a',chh='A';
	for(i=1;i!=0;i++){
		if(x>=65 && x<=90){
		printf("%d=%c ",x++,chh++);	
		}
		}
		printf("\n");
		for(i=1;i!=0;i++){
		if(y>=97 && y<=122){
		printf("%d=%c ",y++,ch++);	
		}	
		}
	}
