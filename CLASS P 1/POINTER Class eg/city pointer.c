//pointer to array
#include<stdio.h>
void main(){
	char city[3][25]={"Baroda","Rajkot","Morbi"};
	//printf("\n%s",(city[1]+3));
	//printf("\n%d",*(city+2)+3);       //small b nu address  (aagad haji ek star lagadi etle ani askey value)       
    printf("\n%c",**(city+1)+2);
	//city[2]=*(city+2)
}





//printf("\n%c",*(*(city+2)+2)+3);  --> output U
