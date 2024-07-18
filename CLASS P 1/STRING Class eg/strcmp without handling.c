//strcmp without using string handling function
#include<stdio.h>
void main(){
	char a[100],b[100];
	printf("Enter string 1 = ");
	gets(a);
	printf("Enter string 2 = ");
	gets(b);
	int i=0,count=0;
	for(i=0;a[i]!='/0' || b[i]!='/0';i++){
		if (a[i]=b[i]){
			count++;
			break;
		}
	}
	if(count==1){
		printf("Not same");
	}
	else{
		printf("Same");
	}
}
