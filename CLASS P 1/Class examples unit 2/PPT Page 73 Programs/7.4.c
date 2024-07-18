//1234 pyramid
#include<stdio.h>
void main(){
	int i,j,n=4;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++){
			if(j%2==1){
				printf("%d",i);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
