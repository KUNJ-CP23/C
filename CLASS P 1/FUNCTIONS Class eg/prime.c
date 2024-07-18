//check prime or not
#include<stdio.h>
int prime(int);
void main()
{
	int n;
	int p;
    printf("Enter the number,n = ");
    scanf("%d",&n);
    p=prime(n);
    if(p==1){
    	printf("\nNumber is prime");
	}
	else{
		printf("Number is not prime");
	}
}
int prime(int k){
	int i=2;
	while(i<=(k/2)){
		if(k%2==0)
			return 0;
		else
			i++;
	}
	return 1;
}
