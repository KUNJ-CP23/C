#include<stdio.h>
struct student{
	char name[6];
	int a;
	int b;
	double c;
};
void main(){
	struct student s1;
	printf("%d",sizeof(s1));
}
