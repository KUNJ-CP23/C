//decimal(4 byte = 32 bits) to binary
#include<stdio.h>
void main(){
	int n,rem,i;
	scanf("%d",&n);   //5
	int bin[32];
	for(i=0;i<32;i++){
		bin[i]=0;
	} //0,0,0,0,...
	for(i=31;n!=0;i--){
		rem=n%2;
		n=n/2;
		bin[i]=rem; //1,0,1,0,0,...
	}
	for(i=0;i<32;i++){
		printf("%d",bin[i]);
	}
}
