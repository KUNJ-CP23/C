//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n
#include<stdio.h>
#include<math.h>
void main(){
	int i,n,sum=0;
	printf("Enter the number until which sum of series is needed = ");
	scanf("%d",&n);
	while(i<=n){
		sum+=pow(i,2);
		i++;
	}
	printf("Sum = %d",sum);
}

//  for (i=2;i<=n;i++){
//		sum+=pow(i,2);
//	}
