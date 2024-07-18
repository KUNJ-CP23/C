//adding using int return type
#include<stdio.h>
int add(int a,int b);   
void main(){
	int a,b,res;
	scanf("%d %d",&a,&b);
	res=add(a,b);     
    printf("%d",res);
}
int add(int j,int k){   
	return j+k;
}
