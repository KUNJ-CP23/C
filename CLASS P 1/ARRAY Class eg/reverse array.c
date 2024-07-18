//enter value
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter n = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter th element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("Enter the element at arr[%d]= %d\n",i,arr[i]);
	}
}
