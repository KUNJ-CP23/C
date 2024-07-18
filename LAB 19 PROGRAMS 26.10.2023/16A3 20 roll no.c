//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){
	int arr[20][2],i,j;
	for(i=0;i<20;i++){
    	printf("\nEnter the roll no. = ");
    	scanf("%d",&arr[i][0]);
    	printf("\nEnter marks = ");
    	scanf("%d",&arr[i][1]);	
	}
	for(i=0;i<20;i++){
    for(j=0;j<2;j++){
    	printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}
