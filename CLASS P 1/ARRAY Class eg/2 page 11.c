//2, pg 11, ppt, avg of n elements
#include<stdio.h>
void main (){
	int i,n;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	int a[n];
	float avg,sum=0;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    	sum=sum+a[i];
	}
	avg=sum/n;
	printf("Average = %f",avg);
}
