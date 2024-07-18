#include<stdio.h>
voidfactorial(int);
void main(){
	int n;
	scanf("%d",&n);
	int f=factorial(n);
	printf("%d",f);
}
int factorial(int f){
	int i=1,res=1;
	for(i=1;i<=f;i++){
		res=res*i;
	}
	return res;
}
