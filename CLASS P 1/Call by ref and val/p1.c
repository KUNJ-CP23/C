//print sum of 5 elements of array in main function 
#include<stdio.h>
int addarray(int a[5]);
void main(){
	int a[5]={10,20,30,40,50};
	int res=addarray(a);        //call [5] kevani jarur nathi
	printf("%d",res);
}
int addarray(int a[5]){
    int res=0,i=0;
    	for(i=0;i<5;i++){
    		res=res+a[i];
		}
		return res;
	}
