//Search element in array
#include <stdio.h>
void main(){
	int i,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int count=0;
	int k;
	for (i=0;i<n;i++){
	    printf("Enter the element into a[%d] : ",i);
	    scanf("%d",&a[i]);
	}
	printf("Enter your element : ");
	scanf("%d",&k);
	for(i=0;i<n;i++){
	    if(a[i]==k){
	    	count++;
	    	break;
		}
	} 
	if(count==1){
			printf("Your element is present in array");
		}
		else{
			printf("Your element is not present in array");
		}
}
