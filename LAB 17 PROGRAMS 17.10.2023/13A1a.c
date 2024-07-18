//13A1a inverted star right triangle
#include<stdio.h>
void main(){
	int i,j,n=5;
	for(i=0;i<5;i++){
		for(j=0;j<n-i;j++){
			printf("*");
		}
		printf("\n");
	}
}
