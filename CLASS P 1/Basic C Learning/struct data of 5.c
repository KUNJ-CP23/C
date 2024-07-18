//5 student data
#include<stdio.h>
struct student{
	char name[40];
	float percent;
	int age;
};
int main(){
	int i,n;
	struct student stu[5];
	for(i=1;i<=5;i++){
		printf("\nEnter Record %d :",i);
		printf("\nEnter Name : ");
		scanf("%s",stu[i].name);
		printf("\nEnter Percentage : ");
		scanf("%f",&stu[i].percent);
		printf("\nEnter Age :");
		scanf("%d",&stu[i].age);
	}
	printf("\n\tName\tPercentage\tAge\t\n");
	for(i=1;i<=5;i++){
		printf("\t %s \t\t %.2f \t\t %d \t\n",stu[i].name,stu[i].percent,stu[i].age);
	}
}
