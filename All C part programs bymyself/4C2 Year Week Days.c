#include<stdio.h>
void main(){
	int t,y,w,d;
	printf("Enter the days = ");
	scanf("%d",&t);
	y=t/365;
	w=(t%365)/7;
	d=(t%365)-(w*7);
	printf("Enter the YY:WW:DD = %02d:%02d:%02d",y,w,d);
}
