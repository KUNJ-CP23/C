#include<stdio.h>
void main(){
	int i,j,temp;
	for(i=1;i<=5;i++)
	{
		if(i%2==0){
			temp=0;
		}
		else{
			temp=1;
		}
		for(j=1;j<=i;j++){
		    printf("%d",temp);
		if(temp==0){
				temp=1;
			}
			else{
				temp=0;
			}
		}
		printf("\n");
	}
}
