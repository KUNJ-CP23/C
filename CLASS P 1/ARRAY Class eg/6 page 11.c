//6,pg 11,ppt, odd even
#include<stdio.h>
void main(){
	int i,j,n,evensum=0,oddsum=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
	    printf("Enter the element into a[%d] : ",i);
	    scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
	if (a[i]%2==0 || a[i]==0){
	    	evensum++;
		}
		else{
			oddsum++;
		}
	}
	printf("\nTotal Even elements are : %d\nTotal Odd elements are : %d",evensum,oddsum);
}
