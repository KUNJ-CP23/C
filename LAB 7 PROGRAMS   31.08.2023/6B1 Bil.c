//Input electricity unit charge and calculate the total electricity bill according to the given condition:
#include<stdio.h>
void main(){
	float u,ans,t;
	printf("Enter the units = ");
	scanf("%f",&u);
	if (u<=50)
	{
		ans=u*0.5;
		printf("Bill is : %f",ans);
	}
	else if (u<=150)
	{
		ans=50*0.5 + (u-50)*0.75;
		printf("Bill is : %f",ans);
	}
	else if (u<=250)
	{
		ans=50*0.5 + 100*0.75 + (u-150)*1.2;
		printf("Bill is : %f",ans);
	}
	else if (u>250)
	{
		ans=50*0.5 + 100*0.75 + 100*1.2 +(u-250)*1.5;
		printf("Bill is : %f",ans);
	}
	t=ans+ ans*0.2;
	printf("\nEnter the total bill : %f",t);
}
