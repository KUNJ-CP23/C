// Practice 1 add two matrix
#include<stdio.h>
void main(){
	int n;
	printf("Enter the n for nth order natrix : ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n],i,j;
	for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    	printf("Enter the element of a and b = ");
    	scanf("%d %d",&a[i][j],&b[i][j]);
	}		
	}
	for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    	c[i][j]=a[i][j]+b[i][j];
    	printf("%d ",c[i][j]);
	}		
	printf("\n");
	}
}
