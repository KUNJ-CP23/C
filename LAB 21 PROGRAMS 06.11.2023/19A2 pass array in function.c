//Pass an array in function to print array elements
#include<stdio.h>
void pass(int a[],int n);
void main(){
	int n,i;
	printf("Enter the size of array = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	pass(a,n);
}
void pass(int a[],int n){
	int i;
	printf("\nElements you entered are :");
	for(i=0;i<n;i++){
		printf("\n[%d] = %d",i,a[i]);
	}
}
