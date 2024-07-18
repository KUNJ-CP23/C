//square * 7.6
#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<=4;i++){
		for (j=0;j<=4;j++){
			if(i==1 || i==4 || j==0 || j==4){
			    printf("*");	
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
