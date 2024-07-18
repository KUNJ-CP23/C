#include<stdio.h>
void main(){
	int i,j,n=5,a=1;
	for(i=1;i<=n;i++){
		//space
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		//star
		for(j=1;j<=2*i-1;j++){
			if(j==1 || j==2*i-1 || i==n ){
				printf("*");
			}
			else
			{printf(" ");
			}
		}
		printf("\n");
	}
}
