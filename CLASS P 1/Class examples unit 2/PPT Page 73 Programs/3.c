//armstrong
//Check whether the given number is Armstrong or not
#include<stdio.h>
void main(){
	int i,n,nd=0,cpn,rem=0,sum=0,temp=1;
	printf("Enter the number = ");
	scanf("%d",&n);
	cpn=n;            //153
	while (n!=0){      
		n=n/10;       //15
		nd=nd+1;    //3	
	}          
	//cpn atle lidho bcoz aaya pochta original value lost thay jase
	n=cpn;
	while(n!=0){
		rem=n%10;  //3  5
		temp=1;
		//power levano 
		for (i=1;i<=nd;i++){
			temp=temp*rem; //27+125
		}
		sum=sum+temp;
		n=n/10;  //153/10=15   15/10=1
	}
	if(sum==cpn){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}
