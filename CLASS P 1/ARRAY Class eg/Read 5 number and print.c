//array class examples
#include<stdio.h>
void main(){
	int mark[5],i;
	for (i=0;i<5;i++){
		printf("Enter the element: ");
		scanf("%d",&mark[i]);
	}
	for (i=0;i<5;i++){
		printf("%d ",mark[i]);
	}
}
