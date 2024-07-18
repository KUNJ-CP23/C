//7.3 101
#include<stdio.h>
void main(){
	int i,j,temp;
	for(i=1;i<=4;i++){
		if(i%2==1){
			temp=1;
		}
		else{
			temp=0;
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
