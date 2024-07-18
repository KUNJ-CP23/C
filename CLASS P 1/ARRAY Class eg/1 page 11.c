//1, pg 11, ppt, sum of n elements
#include<stdio.h>
void main (){
	int i,n;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	int a[n],sum=0;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    	sum=sum+a[i];
	}
	printf("Sum = %d",sum);
}

