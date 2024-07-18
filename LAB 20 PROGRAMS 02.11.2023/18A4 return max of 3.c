//Return the maximum of three floating-point numbers
#include<stdio.h>
void val(float a,float b,float c);
void main (){
	float n1,n2,n3;
	printf("Enter 3 numbers = ");
	scanf("%f %f %f",&n1,&n2,&n3);
	printf("a,b,c= %f %f %f",n1,n2,n3);
	val(n1,n2,n3);
}
    void val(float a,float b,float c){
    	float max;
    	if(a>b){
    		if(a>c){
    			printf("\nMaximum = %f",a);
			}
			else{
				printf("\nMaximum = %f",c);
			}
		}
		else{
			if(b>c){
				printf("\nMaximum = %f",b);
			}
			else{
				printf("\nMaximum = %f",c);
			}
		}
	}
