//table upto n
#include<stdio.h>
void main(){
	int i,n,j;
	printf("Enter the n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
}
