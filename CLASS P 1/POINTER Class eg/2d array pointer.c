//pointer to array
#include<stdio.h>
void main(){
	int a[4][5]={ {1,2,3,4,5},
	            {6,7,8,9,10},
	            {11,12,13,14,15},
	            {16,17,18,19,20} };
    printf("\n%d",*(*(a+**(a+1))+2));	            
}

//printf("\n%d",*(*(a+*(*a+1)+2)));  --> garbage
//printf("\n%d",*(*(a+*(*a)+2)));    -->16
