//Read values in two-dimensional array and print them in matrix form
#include<stdio.h>
void main(){
	int n,m;
	printf("Enter the row : ");
	scanf("%d",&n);
	printf("Enter the coloumn : ");
	scanf("%d",&m);
	int arr[n][m],i,j;
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("Enter the element = ");
    	scanf("%d",&arr[i][j]);
	}		
	}
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("%d ",arr[i][j]);
	}		
	printf("\n");
	}
}
