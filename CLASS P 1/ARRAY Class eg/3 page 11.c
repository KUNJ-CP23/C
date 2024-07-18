//3, pg 11, ppt, largest of all elements
#include<stdio.h>
void main (){
	int i,n;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	int a[n],max;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
    for(i=0;i<n;i++){
    	if(max<=a[i]){
    	max=a[i];
	}
}
	printf("Largest = %d",max);
}
