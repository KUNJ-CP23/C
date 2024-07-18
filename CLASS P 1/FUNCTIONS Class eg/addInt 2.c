#include<stdio.h>
void addInt(int a,int b);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	addInt(a,b);
}
void addInt(int j,int k){
	printf("%d",j+k);
}
