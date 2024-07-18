//Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles,
//equilateral, scalene or right angled triangle
#include<stdio.h>
void main(){
	float a,b,c;
	printf("Enter the sides of triangle = ");
	scanf("%f %f %f",&a,&b,&c);
	if (a==b && b==c){
	    printf("Equilateral triangle");
	}
	else if (a==b || b==c || a==c) {
		printf("Isosceles triangle");
	}
	else {
		printf("Scalene Triangle\n");
    }
    if ( (c*c)==(b*b)+(a*a) || (b*b)==(a*a)+(c*c) || (a*a)==(b*b)+(c*c) ){
    	printf("Right Angled Triangle\n");
	}
}
