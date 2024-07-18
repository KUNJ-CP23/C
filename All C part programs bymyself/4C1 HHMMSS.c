#include<stdio.h>
void main(){
	int t,h,m,s;
	printf("Enter the time in seconds = ");
	scanf("%d",&t);
	h=t/3600;
	m=(t%3600)/60;
	s=(t%3600)-(m*60);
	printf("Enter the time in HH:MM:SS = %02d:%02d:%02d",h,m,s);
}
