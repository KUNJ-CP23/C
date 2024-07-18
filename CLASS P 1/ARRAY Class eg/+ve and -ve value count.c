//+ve and -ve array
#include<stdio.h>
void main(){
	int arr[10],i,pos=0,neg=0;
	for(i=0;i<10;i++){
		printf("Enter the element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]>=0){
			pos=pos+1;
		}
		else if(arr[i]<0){
			neg=neg+1;
		}
	}
	printf("Positive numbers = %d\nNegative numbers = %d",pos,neg);
}
