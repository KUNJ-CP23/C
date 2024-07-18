//print yes when array atleast three numbers ascending order.
#include<stdio.h>
void main(){
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	int a[n],i,count=0;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d,",a[i]);
		if(a[i]=a[i+1]){
			count++;               //arr[1,1,1,2,2,2,2,3,3,3,4,4,4,4]
			if(count>=3){        
				if(i<i++)         //count 3 and i<i++, sum++
			}
		}
	}
}

