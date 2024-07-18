Find maximum and minimum between two numbers using function
#include<stdio.h>
void main (){
	int n1,n2,res;
	printf("Enter the num1 and num2 = ");
	scanf("%d %d",&n1,&n2);
	val(n1,n2);
}
    void val(int n1,int n2){
    	int max,min;
    	if(n1>n2){
    		max=n1;
    		min=n2;
		}
		else{
			max=n2;
			min=n1;
		}
		printf("Maximum = %d\nMinimum = %d",max,min);
	}


