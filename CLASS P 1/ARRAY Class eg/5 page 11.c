//5,pg 11, ppt, copy array elements
#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n],b[n];
	for (i=0;i<n;i++){
	    printf("Enter the element into a[%d] : ",i);
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    b[i]=a[i];
	    printf("\nEnter the element into b[%d] = %d ",i,b[i]);
	}
}
