//4, pg 11, ppt, sum of 2nd and second last element in array
#include<stdio.h>
void main (){
	int i,n;
	printf("Enter the number of elements greater than 2 = ");
	scanf("%d",&n);
	int a[n],sum=0;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	sum=a[1]+a[n-2];
	printf("Sum of 2nd and second last elements = %d",sum);
}
