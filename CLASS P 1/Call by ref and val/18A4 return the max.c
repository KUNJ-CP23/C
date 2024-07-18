//18A4
#include<stdio.h>
int max(int a,int b,int c){
	if (a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else if(c>a && c>b){
		return c;
	}
}
void main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int Max=max(a,b,c);
	printf("%d",Max);
}
