//print sum of numbers, even n odd until -1
#include <stdio.h>
void main(){
	int n=1,oddsum=0,evensum =0;
	while (n!=0){
		if (n%2==0){
			evensum=evensum+n;
		}
		else{
			oddsum=oddsum+n;
		}
		scanf("%d",&n);
	}
	printf("Even sum = %d",evensum);
	printf("Odd sum = %d",oddsum-1);
}
