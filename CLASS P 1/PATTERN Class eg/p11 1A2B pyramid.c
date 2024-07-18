#include<stdio.h>
void main(){
	int i,j,n=5,a=1;
	char ch='A';
	for(i=1;i<=n;i++){
		//space
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++){
			if (j%2==1){
				if(i%2==0){
				printf("%c",ch++);
				}	
				else {
					printf("%d",a++);
				}
			}
			else{
			printf(" ");
			}
		}
		printf("\n");
	}
}
