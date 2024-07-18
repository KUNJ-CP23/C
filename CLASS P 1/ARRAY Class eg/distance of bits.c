//print distance between two numbers
#include<stdio.h>
void main(){
	int n,m,ans,i,count=0;
	scanf("%d %d",&n,&m);
	ans=n^m;
	for(i=0;i<31;i++){
		printf("%d",ans&0);
		count=count+(ans&1);
		ans=ans>>1;
}
printf("%d",count);
}

//8=1000 ^ 14=1110  =  0110
