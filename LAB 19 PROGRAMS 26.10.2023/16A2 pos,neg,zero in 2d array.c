//Count number of positive, negative and zero elements from 3 X 3 matrix
#include<stdio.h>
void main(){
	int n,m;
	printf("Enter the row : ");
	scanf("%d",&n);
	printf("Enter the coloumn : ");
	scanf("%d",&m);
	int arr[n][m],i,j,pos=0,neg=0,zero=0;
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("Enter the element = ");
    	scanf("%d",&arr[i][j]);
	}		
	}
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	if(arr[i][j]>0){
         	pos=pos+1;
		}
		else if (arr[i][j]<0){
			neg=neg+1;
		}
		else{
			zero=zero+1;
		}
    }
}
    printf("Positive numbers = %d\nNegative numbers = %d\nZeroes = %d",pos,neg,zero);
}
