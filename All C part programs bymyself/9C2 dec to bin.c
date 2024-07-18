//Convert decimal number to binary.
#include<stdio.h>
void main(){
    int i,n,rem;
    printf("Enter the number = ");
    scanf("%d",&n);
    int bin[32];
    for(i=0;i<32;i++){
		bin[i]=0;
	} //0,0,0,0,...
	for(i=0;n!=0;i++){
		rem=n%2;    //5%2=1  2%2=0  1%2=1
		n=n/2;      //5/2=2  2/2=1  1/2=0
		bin[i]=rem; //1,0,1,0,0,...
	}
	for(i=31;i>=0;i--){
		printf("%d",bin[i]);
	}
}
