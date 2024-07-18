//count simple interest using function si=prt/100
#include<stdio.h>
float si(int p, int r, int t);
void main(){
	int p,r,t;
//	float res;
	printf("Enter the principle amount : ");
	scanf("%d",&p);
	printf("\nEnter rate of interest : ");
	scanf("%d",&r);
	printf("\nEnter time : ");
	scanf("%d",&t);
	float res=si(p,r,t);
	printf("\nSimple Interest : %f",res);
}
float si(int p, int r, int t){
	float k;
	k=(p*r*t)/100.0;
	return k;
}





