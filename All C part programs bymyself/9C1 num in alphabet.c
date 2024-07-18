//Convert given number in words. (i.e. n=3456 ? output: Three Four Five Six)
#include<stdio.h>
void main(){
	int n,rem,sum=0;
	printf("Enter the number = ");
	scanf("%d",&n);  //3546
	while(n!=0){
	 rem=n%10;
	 sum=(sum*10)+rem;
	 n=n/10;
	}
	while(sum!=0){   //sum=6453
		rem=sum%10;
		switch (rem){
			case 0:printf("Zero ");
			break;
			case 1:printf("One ");
			break;
			case 2:printf("Two ");
			break;
			case 3:printf("Three ");
			break;
			case 4:printf("Four ");
			break;
			case 5:printf("Five ");
			break;
			case 6:printf("Six ");
			break;
			case 7:printf("Seven ");
			break;
			case 8:printf("Eight ");
			break;
			case 9:printf("Nine ");
			break;
			default:printf("Enter the valid input");
			break;
		}
		sum=sum/10;
	}
}
