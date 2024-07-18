//count pos,neg,0 in 3*3 matrix
#include<stdio.h>
void main(){
	int arr[3][3],i,j,pos=0,neg=0,zero=0;
	for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    	printf("Enter the element = ");
    	scanf("%d",&arr[i][j]);
     if(arr[i][j]>0){
     	pos=pos+1;
	 }
	 else if(arr[i][j]<0){
     	neg=neg+1;
	 }
	 else /*if didnt work*/{
     	zero=zero+1;
	 }
	}		
	}
	printf("Positive numbers = %d  Negative numbers = %d  Zero's = %d",pos,neg,zero);
}
