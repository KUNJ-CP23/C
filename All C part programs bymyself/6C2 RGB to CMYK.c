//6C2 CMYK Colours
#include<stdio.h>
void main(){
	int R,B,G;
	float W,R1,B1,G1,max,C,M,Y,K;
	printf("Enter the value of R,G,B between 0 to 255 = ");
	scanf("%d %d %d",&R,&B,&G);
	R1=R/255.0;
	G1=G/255.0;
	B1=B/255.0;
	printf("Red = %f\nGreen = %f\nBlue = %f\n",R1,G1,B1);
	//max among all
	if (R1>G1)
	{
		if(R1>B1){
			max=R1;
		}
		else{
			max=B1;
		}
	}
    else
    {
		if(G1>B1){
			max=G1;
		}
		else{
			max=B1;
		}
	}
	W=max;
	C=(W-R1)/W;
	M=(W-B1)/W;
	Y=(W-G1)/W;
	K=1-W;//K=BLACK
	printf("White= %f\nCyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f\n",W,C,M,Y,K);
}
