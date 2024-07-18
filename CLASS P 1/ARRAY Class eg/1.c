//1,pg 17,ppt,add two matrix
#include<stdio.h>
void main(){
	int n,m;
	printf("Enter the row : ");
	scanf("%d",&n);
	printf("Enter the coloumn : ");
	scanf("%d",&m);
	int a[n][m],b[n][m],i,j;
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("Enter the element of a[%d][%d] = ",i,j);
    	scanf("%d",&a[i][j]);
	}		
	}
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("Enter the element of b[%d][%d] = ",i,j);
    	scanf("%d",&b[i][j]);
	}		
	}
	for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("%d ",(a[i][j]+b[i][j]));
	}	
	printf("\n");	
	}	
}
